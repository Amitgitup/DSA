# Minimum Cost to Cut a Stick - LeetCode 1547

**Problem Link:** [LeetCode 1547 - Minimum Cost to Cut a Stick](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/)

---

## Problem Description

Given a wooden stick of length `n` units, you need to perform `m` cuts at given positions. Each cut costs the sum of the current stick's length. The goal is to find the minimum cost to cut the stick at all positions.

**Example:**
- Stick length: 7
- Cuts at positions: [1, 3, 4, 5]
- Goal: Find minimum cost to complete all cuts

---

## Approach

This problem is solved using **Dynamic Programming** with different strategies:

### 1. **Recursion (Without Memoization)**

**Logic:**
- For each cut position, try cutting at each location
- Recursively find the minimum cost for left and right parts
- Cost at each cut = current stick length + cost of left part + cost of right part

**Time Complexity:** `O(n^m)` or exponential
- At each step, we have multiple choices and recursively solve overlapping subproblems
- Without memoization, the same subproblems are computed multiple times

**Space Complexity:** `O(m)` (recursion depth)

---

### 2. **Memoization (Top-Down DP)**

**Logic:**
- Same recursive approach but store computed results in a DP table
- Before computing, check if the result already exists in the DP table
- Return cached result if available

**Time Complexity:** `O(m^3)` where m is the number of cuts
- We have `m^2` unique subproblems (all pairs [i, j])
- For each subproblem, we iterate through all cut positions: O(m)
- Total: `O(m^2) * O(m) = O(m^3)`

**Space Complexity:** `O(m^2)` (DP table)

---

### 3. **Tabulation (Bottom-Up DP)**

**Logic:**
- Build the DP table iteratively from bottom to top
- Fill the table for all possible intervals
- Use previously computed values to calculate current state
- Return the result from DP table

**Time Complexity:** `O(m^3)`
- We fill an `m x m` DP table
- For each cell, we iterate through all cut positions
- Total: `O(m^2) * O(m) = O(m^3)`

**Space Complexity:** `O(m^2)` (DP table)

---

## Comparison

| Approach | Time Complexity | Space Complexity | Pros | Cons |
|----------|-----------------|------------------|------|------|
| Recursion | O(n^m) | O(m) | Simple logic | Very slow, TLE |
| Memoization | O(m^3) | O(m^2) | Easy to understand | Function call overhead |
| Tabulation | O(m^3) | O(m^2) | No recursion overhead | Bottom-up logic harder to grasp |

---

## Key Points

1. **Sort the cuts first** to determine relative positions
2. **Add boundaries** (0 and n) to the cuts array for easier calculation
3. **Cost formula:** `cost[j+1] - cost[i-1] + dp[i][k-1] + dp[k+1][j]`
   - `cost[j+1] - cost[i-1]` = current stick length
   - `dp[i][k-1]` = cost of left part
   - `dp[k+1][j]` = cost of right part

4. **DP State:** `dp[i][j]` = minimum cost to make all cuts between cuts[i] and cuts[j]

---

## Complexity Summary

```
Recursion:    O(2^m)         → Exponential time, will timeout
Memoization:  O(m^3)         → Polynomial time, optimized recursion
Tabulation:   O(m^3)         → Polynomial time, iterative approach
```

Where `m` is the number of cuts to be made.
