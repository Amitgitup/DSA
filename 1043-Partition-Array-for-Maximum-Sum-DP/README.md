# LeetCode 1043 - Partition Array for Maximum Sum

LeetCode link: https://leetcode.com/problems/partition-array-for-maximum-sum/

## Problem
Given an integer array `arr` and an integer `k`, partition `arr` into contiguous subarrays of length at most `k`. For each subarray, choose the maximum value and multiply it by the subarray length. Return the maximum sum of these values across all partitions.

## Approach
- Recursion explores every valid partition boundary and computes the maximum sum for each segment.
- Memoization stores results for each index to avoid recomputing overlapping subproblems.
- Tabulation builds the solution from left to right using dynamic programming.
- Maintain a running maximum for the current segment while iterating through possible partition lengths.

## Time Complexity
- Recursion: `O(n * k)`
  - Each index tries up to `k` partition lengths, and segment maximum updates take constant time per step.
  - Total work is `O(n * k)` across all recursive calls.

- Memoization: `O(n * k)`
  - Top-down DP with memo stores the best result from each start index.
  - Each index still evaluates up to `k` partitions, and each partition uses `O(1)` update to maintain the maximum.

- Tabulation: `O(n * k)`
  - Bottom-up DP iterates through array indices and considers up to `k` previous elements per state.
  - Each state computes the best partition ending at that index in `O(k)` time.

## Notes
- The optimal solution uses dynamic programming with a sliding maximum inside each partition window.
- This problem is a good example of converting a recursive partitioning problem into an efficient DP solution.
