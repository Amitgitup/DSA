# 63. Unique Paths II

LeetCode: https://leetcode.com/problems/unique-paths-ii/

Problem summary
- Given an m x n grid where some cells are obstacles (marked `1`) and empty cells are `0`, count how many unique paths exist from the top-left corner to the bottom-right corner if you can only move down or right. Paths cannot pass through obstacles.

Constraints
- 1 <= m, n <= 100
- `obstacleGrid[i][j]` is either `0` or `1`.

Approach (Dynamic Programming)
- Let `dp[i][j]` be the number of ways to reach cell (i, j).
- If `obstacleGrid[i][j] == 1` then `dp[i][j] = 0`.
- Otherwise, `dp[i][j] = dp[i-1][j] + dp[i][j-1]`, with base initialization handling the first row/column (stop if an obstacle is encountered).
- Optimization: use a 1D array of length `n` and update in place to achieve O(n) extra space.

Complexity
- Time: O(m * n)
- Space: O(n) (using optimized 1D DP), or O(m * n) for a 2D DP.

Reference implementation
- See `unique-paths-II.cpp` in this folder for a sample implementation.

Notes
- This README includes the official LeetCode link at the top for easy access.
