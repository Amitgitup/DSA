2089

# Find Target Indices After Sorting Array

LeetCode: https://leetcode.com/problems/find-target-indices-after-sorting-array/

Problem:
You are given an integer array `nums` and an integer `target`. Return the indices of `target` in the sorted array `nums` after sorting in non-decreasing order. If `target` appears multiple times, return all indices in ascending order.

Example:
- Input: nums = [1,2,5,2,3], target = 2
- Output: [1, 2]

Approach:
- Sort the array in non-decreasing order.
- Traverse the sorted array and collect every index where `nums[i] == target`.
- Return the collected indices in ascending order.

Time Complexity: O(n log n) because of sorting.
Space Complexity: O(1) extra space if sorting is done in-place, otherwise depends on the sorting implementation.

Solution file: Find-Target-Indices-After-Sorting-Array.cpp
