# Minimum Common Value - LeetCode 2540

**LeetCode Link:** https://leetcode.com/problems/minimum-common-value/

## Problem Statement

Given two integer arrays `nums1` and `nums2`, both sorted in **non-decreasing order**, return the **minimum** integer that appears in both arrays. If no such integer exists, return `-1`.

## Examples

### Example 1:
```
Input: nums1 = [1,2,3,6], nums2 = [2,3,4,5]
Output: 2
Explanation: The common elements are [2, 3], and the minimum is 2.
```

### Example 2:
```
Input: nums1 = [1,2,3,6], nums2 = [23,34,45,56]
Output: -1
Explanation: There is no common element between nums1 and nums2.
```

## Constraints

- `1 <= nums1.length, nums2.length <= 10^5`
- `1 <= nums1[i], nums2[i] <= 10^9`
- Both `nums1` and `nums2` are sorted in non-decreasing order

## Solution Approach

### Two Pointer Technique (Optimal)

Since both arrays are sorted, we can use two pointers to traverse both arrays efficiently:

1. Initialize pointers `i = 0` (for `nums1`) and `j = 0` (for `nums2`)
2. Compare elements at both pointers:
   - If `nums1[i] == nums2[j]`: We found a common element, return it (it's the minimum)
   - If `nums1[i] < nums2[j]`: Move `i` forward
   - If `nums1[i] > nums2[j]`: Move `j` forward
3. If we reach the end without finding a common element, return `-1`

### Time Complexity: O(n + m)
- Where `n` is the length of `nums1` and `m` is the length of `nums2`
- Each element is visited at most once

### Space Complexity: O(1)
- No extra space is used

## Implementation

See [Minimum-Common-Value.cpp](./Minimum-Common-Value.cpp) for the complete implementation.
