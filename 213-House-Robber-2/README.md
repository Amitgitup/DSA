# 213 - House Robber II

LeetCode: https://leetcode.com/problems/house-robber-ii/

Problem
- A variation of House Robber where houses are arranged in a circle. Adjacent houses cannot both be robbed. Determine the maximum amount of money that can be robbed without triggering the alarm.

Key idea
- Reduce the circular problem to two linear runs: rob houses [0..n-2] and [1..n-1], then take the max. Use dynamic programming for each linear run: at each house, decide to rob it (add to prev2) or skip it (take prev1).

Approach
- Handle small n (n == 1) as a special case.
- For linear DP, maintain two variables: `prev1` (max till previous) and `prev2` (max till previous-1).
- Compute both ranges and return the maximum.

Time Complexity
- O(n)

Space Complexity
- O(1)

Reference implementation
- See `house-robber-2.cpp` for a C++ solution in this folder.

Example
- Input: [2,3,2] → Output: 3

Notes
- This README is a concise reference for LeetCode 213 and points to the solution file in this folder.
