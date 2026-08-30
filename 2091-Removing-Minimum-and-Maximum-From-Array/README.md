# Removing Minimum and Maximum From Array (LeetCode 2091)

LeetCode link: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/

Problem
- Given an array of integers, you can remove elements from either the front or the back. Return the minimum number of removals required to remove both the minimum and maximum elements from the array.

Approach
- Find the indices of the minimum and maximum elements (0-based): let `a` = index_min, `b` = index_max. Ensure `a <= b` by swapping if necessary.
- Consider three strategies and take the minimum:
  1. Remove from left only: `b + 1` operations.
  2. Remove from right only: `n - a` operations.
  3. Remove `a` from left and `b` from right: `(a + 1) + (n - b)` operations.

Answer: `min(b+1, n-a, a+1 + n-b)`

Complexity
- Time: `O(n)` — single pass to find min/max indices.
- Space: `O(1)` — constant extra space.

Reference implementation
- See the C++ solution: [Removing-Minimum-and-Maximum-From-Array.cpp](Removing-Minimum-and-Maximum-From-Array.cpp#L1)
