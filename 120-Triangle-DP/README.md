
# 120. Triangle

LeetCode problem: https://leetcode.com/problems/triangle/

Problem
-------
Given a triangle array, return the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

Constraints
- Triangle height: n >= 1
- Values may be negative or positive integers

Approach
--------
- Top-down memoization: recursively compute minimum from each position with caching.
- Bottom-up tabulation: fill DP table from last row up.
- Space optimization: use a single vector for the next row (or two rows) to reduce memory.

Recurrence: dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1])

Time Complexity: O(n^2)
Space Complexity: O(n) with optimization, O(n^2) for full table

Example
-------
Input:
[
		 [2],
		[3,4],
	 [6,5,7],
	[4,1,8,3]
]

Output: 11

Explanation: The minimum path is 2 → 3 → 5 → 1.

Solution
--------
See the implementation: [triangle.cpp](triangle.cpp)

