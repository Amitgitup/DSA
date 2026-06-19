# 62. Unique Paths

LeetCode: https://leetcode.com/problems/unique-paths/

Problem summary
- Given an m x n grid, count how many unique paths exist from the top-left corner to the bottom-right corner if you can only move down or right.

Constraints
- 1 <= m, n <= 100

Approach (Dynamic Programming)
- Let `dp[i][j]` be the number of ways to reach cell (i, j).
- Recurrence: `dp[i][j] = dp[i-1][j] + dp[i][j-1]` with base cases along first row and first column = 1.
- Optimization: use a 1D array of length `n` to achieve O(n) extra space.

Complexity
- Time: O(m * n)
- Space: O(n) (using the optimized 1D DP), or O(m * n) for the 2D DP implementation.

Reference implementation
- See `unique-paths.cpp` in this folder for a sample implementation.

Notes
- This README includes the official LeetCode link at the top for easy access.
