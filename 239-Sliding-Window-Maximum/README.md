# LeetCode 239: Sliding Window Maximum

Link: https://leetcode.com/problems/sliding-window-maximum/

## Problem
Given an array `nums` and an integer `k`, return an array of the maximum values in each sliding window of size `k` as the window moves from left to right.

## Approach
- Use a deque to maintain indices of useful elements in the current window.
- Keep the deque ordered so the front always contains the index of the largest element.
- Remove indices from the back when the current element is larger than or equal to them.
- Remove indices from the front when they move out of the window range.
- Add the current maximum to the result once the first full window is formed.

## Complexity
- Time: O(n), where n is the length of `nums`.
- Space: O(k), for the deque and output storage.

## Notes
- The deque stores indices, not values, to easily check if elements are out of the current window.
- This is the optimal solution for the sliding window maximum problem.
