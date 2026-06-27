# LeetCode 115 - Distinct Subsequences

**Problem Link:** [https://leetcode.com/problems/distinct-subsequences/](https://leetcode.com/problems/distinct-subsequences/)

---

## Problem Description

Given two strings `s` and `t`, return the number of distinct subsequences of `s` which equals `t`.

A **subsequence** of a string is a new string which is formed from the original string by deleting some (can be zero) characters without disturbing the relative positions of the remaining characters.

### Example
```
Input: s = "rabbbit", t = "rabbit"
Output: 3

Explanation: There are 3 ways you can generate "rabbit" from "rabbbit":
- rabbbit
- rabbbit
- rabbbit
```

---

## Solutions with Complexity Analysis

### 1. **Recursion (Brute Force)**

**Approach:** 
- Recursively explore all subsequences of `s`
- At each character in `s`, we have two choices: include it or skip it
- If the character matches the current character in `t`, we can either use it or skip it
- If it doesn't match, we must skip it

**Time Complexity:** $O(2^{n \cdot m})$  
- In the worst case, we explore all possible combinations of characters from `s` for each position in `t`
- Exponential due to branching at each step

**Space Complexity:** $O(n + m)$  
- Recursion call stack depth is at most $n + m$

---

### 2. **Memoization (Top-Down DP)**

**Approach:**
- Same recursive logic as brute force, but store results of overlapping subproblems
- Use a 2D DP table `dp[i][j]` to store the number of distinct subsequences of `s[0...i]` that equal `t[0...j]`
- Base cases:
  - If `j < 0` (entire `t` matched), return 1
  - If `i < 0` (entire `s` exhausted but `t` not matched), return 0

**Recurrence Relation:**
- If `s[i] == t[j]`: `dp[i][j] = dp[i-1][j-1] + dp[i-1][j]`
  - Either use the matching character or skip it
- Else: `dp[i][j] = dp[i-1][j]`
  - Skip the current character in `s`

**Time Complexity:** $O(n \cdot m)$  
- We compute each subproblem only once
- Total unique subproblems: $n \times m$
- Each subproblem takes constant time

**Space Complexity:** $O(n \cdot m)$  
- 2D DP table of size $(n+1) \times (m+1)$
- Recursion call stack: $O(n + m)$
- Total: $O(n \cdot m)$

---

### 3. **Tabulation (Bottom-Up DP)**

**Approach:**
- Build the DP table iteratively from base cases upward
- Initialize `dp[i][0] = 1` for all `i` (empty target string matches in exactly 1 way)
- Initialize `dp[0][j] = 0` for `j > 0` (non-empty target cannot be formed from empty source)
- Fill the table row by row using the recurrence relation

**Recurrence Relation:**
- If `s[i-1] == t[j-1]`: `dp[i][j] = dp[i-1][j-1] + dp[i-1][j]`
- Else: `dp[i][j] = dp[i-1][j]`

**Time Complexity:** $O(n \cdot m)$  
- We fill every cell of the $(n+1) \times (m+1)$ table exactly once
- Each cell computation takes constant time

**Space Complexity:** $O(n \cdot m)$  
- 2D DP table of size $(n+1) \times (m+1)$

---

### 4. **Space Optimization (Two 1D Arrays)**

**Approach:**
- Optimize space by observing that `dp[i][j]` only depends on `dp[i-1][j-1]` and `dp[i-1][j]`
- Keep only two rows: `prev` (previous row) and `cur` (current row)
- Update `prev` to `cur` after processing each row

**Recurrence Relation:**
- If `s[i-1] == t[j-1]`: `cur[j] = prev[j-1] + prev[j]`
- Else: `cur[j] = prev[j]`

**Time Complexity:** $O(n \cdot m)$  
- Same as tabulation approach
- We still process all $n \times m$ combinations

**Space Complexity:** $O(m)$  
- Only two 1D arrays of size $(m+1)$
- Reduces from $O(n \cdot m)$ to $O(m)$

---

### 5. **1D Array Optimization**

**Approach:**
- Further optimize space by using only a single 1D array
- Process the inner loop from **right to left** (reverse order)
- This ensures that when we update `prev[j]`, we haven't yet overwritten `prev[j-1]` in the current iteration
- The pattern prevents overwriting values we still need

**Recurrence Relation:**
- If `s[i-1] == t[j-1]`: `prev[j] = prev[j-1] + prev[j]`
- Process `j` from `m` down to `1` to avoid using updated values

**Time Complexity:** $O(n \cdot m)$  
- We still iterate through all $n \times m$ combinations
- Single array reduces constant factors but maintains the same complexity

**Space Complexity:** $O(m)$  
- Only one 1D array of size $(m+1)$
- Most space-efficient approach

---

## Summary Table

| Approach | Time Complexity | Space Complexity | Optimization |
|----------|-----------------|------------------|---------------|
| Recursion | $O(2^{n \cdot m})$ | $O(n + m)$ | ❌ |
| Memoization | $O(n \cdot m)$ | $O(n \cdot m)$ | Avoid recalculation |
| Tabulation | $O(n \cdot m)$ | $O(n \cdot m)$ | Iterative DP |
| Space Optimization (2 Arrays) | $O(n \cdot m)$ | $O(m)$ | Keep only prev row |
| 1D Array Optimization | $O(n \cdot m)$ | $O(m)$ | Single array, reverse iteration |

---

## Key Insights

1. **DP State:** `dp[i][j]` = number of distinct subsequences of `s[0...i-1]` that equal `t[0...j-1]`

2. **Two Choices When Characters Match:**
   - Use the matching character: `dp[i-1][j-1]`
   - Skip it: `dp[i-1][j]`
   - Result: Sum of both

3. **Space Optimization Valid:** Since we only need the previous row to compute the current row, we can reduce space from 2D to 1D

4. **Reverse Iteration:** When using a single array, iterate from right to left to ensure we're using values from the "previous iteration" (row), not the current iteration

5. **Data Type:** Use `long long` or `double` to avoid integer overflow for large inputs

