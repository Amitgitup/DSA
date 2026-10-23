3644. Maximum K to Sort a Permutation

LeetCode: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/

Problem:
Given a permutation of numbers, find the maximum value of K such that the array can be made sorted by performing some operation related to the positions where the permutation differs from its sorted order.

In this solution, we compare the original array with its sorted version and compute the bitwise AND of all elements that are out of place. If the array is already sorted, the answer is 0.

Example:
- Input: nums = [3, 2, 1, 4]
- Output: 0

Approach:
- Create a sorted copy of the array.
- Traverse both arrays in parallel.
- Ignore elements already in the correct position.
- For every mismatched element, keep a bitwise AND over those values.
- If every element already matches the sorted array, return 0.

Time Complexity: O(n log n) due to sorting.
Space Complexity: O(n) for the copied and sorted arrays.

Solution file: Maximum-K-to-Sort-a-Permutation.cpp
