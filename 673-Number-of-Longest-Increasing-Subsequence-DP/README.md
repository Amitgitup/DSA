# LeetCode 673 - Number of Longest Increasing Subsequence

Link: https://leetcode.com/problems/number-of-longest-increasing-subsequence/

## Problem Summary
Given an integer array `nums`, return the number of longest increasing subsequences in the array. An increasing subsequence is a subsequence where every element is strictly greater than the previous one.

## Key Idea
- Compute the length of the longest increasing subsequence ending at each index.
- Track how many such sequences reach that length.
- Use dynamic programming with two arrays:
  - `length[i]` = length of LIS ending at index `i`
  - `count[i]` = number of LIS ending at index `i`

## Approach
1. Initialize `length` and `count` arrays with `1` for each index.
2. For each index `i`, iterate `j` from `0` to `i-1`:
   - If `nums[j] < nums[i]`, consider extending subsequences ending at `j`.
   - If `length[j] + 1 > length[i]`, update `length[i]` and set `count[i] = count[j]`.
   - If `length[j] + 1 == length[i]`, add `count[j]` to `count[i]`.
3. Track the maximum subsequence length found.
4. Sum `count[i]` for all indices `i` where `length[i]` equals the maximum.

## Complexity
- Time: O(N^2), where N is the number of elements in `nums`.
- Space: O(N) for `length` and `count` arrays.

## Notes
- This is a classic DP problem with state tracking for both length and count.
- When multiple LIS end at the same index, counts are accumulated.
- The final answer is the total number of LIS of maximum length.

## Solution File
See `673-Number-of-Longest-Increasing-Subsequence.cpp` for the implementation.
