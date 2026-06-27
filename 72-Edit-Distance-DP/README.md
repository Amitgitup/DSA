# 72. Edit Distance

LeetCode problem: https://leetcode.com/problems/edit-distance/

## Problem
Given two strings `word1` and `word2`, return the minimum number of operations required to convert `word1` into `word2`.

Allowed operations:
- Insert a character
- Delete a character
- Replace a character

## Approaches

### 1. Recursion
- Explore all possibilities: insert, delete, replace when characters differ.
- Use base cases when one string is exhausted.
- Time Complexity: `O(3^{(n+m)})` in the worst case (exponential).
- Space Complexity: `O(n+m)` recursion stack.

### 2. Memoization (Top-down DP)
- Add a `dp` table to store results for `(i, j)` states.
- Avoid repeated calculations by reusing cached results.
- Time Complexity: `O(n * m)`.
- Space Complexity: `O(n * m)` for memo table plus `O(n+m)` recursion stack.

### 3. Tabulation (Bottom-up DP)
- Build a 2D DP table iteratively from base cases.
- `dp[i][j]` holds the minimum operations to convert the first `i` characters of `word1` to the first `j` characters of `word2`.
- Time Complexity: `O(n * m)`.
- Space Complexity: `O(n * m)`.

### 4. Space Optimization
- Only keep the previous row and the current row instead of the full 2D table.
- This reduces memory while preserving the same DP transitions.
- Time Complexity: `O(n * m)`.
- Space Complexity: `O(m)`.

### 5. 1D Array Optimization
- Use a single 1D array with careful updates to simulate the DP row transitions.
- This further minimizes auxiliary space while still computing the correct result.
- Time Complexity: `O(n * m)`.
- Space Complexity: `O(m)`.

## Notes
- `n` is the length of `word1` and `m` is the length of `word2`.
- When characters match, no operation is needed and the result comes from the diagonal state.
- When characters differ, the answer is `1 + min(insert, delete, replace)`.

## Current implementation
The current `edit-distance.cpp` file includes:
- Recursive memoization implementation
- Tabulation implementation (commented)
- Space-optimized implementation using 1D arrays
