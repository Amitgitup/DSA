
# 64. Minimum Path Sum

LeetCode problem: https://leetcode.com/problems/minimum-path-sum/

Problem
-------
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path. You can only move either down or right at any point in time.

Constraints
- Grid dimensions: m, n >= 1
- Values are non-negative integers

Approach
--------
Dynamic Programming: dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]) with appropriate boundary handling.

Time Complexity: O(m * n)
Space Complexity: O(n) (can be optimized to 1D) or O(m * n) for full table

Example
-------
Input:
[
	[1,3,1],
	[1,5,1],
	[4,2,1]
]

Output: 7

Explanation: The path 1→3→1→1→1 minimizes the sum.

Solution
--------
See the implementation: [minimum-path-sum.cpp](minimum-path-sum.cpp)

