# LeetCode 368 - Largest Divisible Subset

Link: https://leetcode.com/problems/largest-divisible-subset/

## Problem
Given an integer array 
ums, return the largest subset such that for every pair (answer[i], answer[j]) of elements in this subset, either nswer[i] % answer[j] == 0 or nswer[j] % answer[i] == 0.

If there are multiple answers, return any of them.

## Approach
- Sort 
ums to ensure divisibility checks work consistently on smaller-to-larger values.
- Use dynamic programming with dp[i] storing the size of the largest divisible subset ending at index i.
- Use parent[i] to record the previous index in the subset path.
- For each i, check all j < i; if 
ums[i] % nums[j] == 0 and dp[j] + 1 > dp[i], update dp[i] and parent[i].
- Track the end index of the maximum subset and reconstruct the subset by following parent pointers.

## Complexity
- Time: O(n^2) 
- Space: O(n)

## Code
See Largest-Divisible-Subset.cpp for the implementation.

