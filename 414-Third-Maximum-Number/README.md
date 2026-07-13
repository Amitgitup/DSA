# Third Maximum Number - LeetCode 414

**LeetCode Link:** https://leetcode.com/problems/third-maximum-number/

## Problem Statement

Given an integer array `nums`, return the **third distinct maximum** number in this array. If the third maximum does not exist, return the **maximum** number.

## Examples

### Example 1:
```
Input: nums = [3,2,1]
Output: 1
Explanation: The third maximum is 1.
```

### Example 2:
```
Input: nums = [1,2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
```

### Example 3:
```
Input: nums = [2,2,3,1]
Output: 1
Explanation: The third distinct maximum is 1.
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Solution Approach

### Approach: Sorting with Distinct Tracking

1. Sort the array in ascending order
2. Track the first maximum (largest), second maximum, and third maximum
3. Traverse the sorted array from right to left
4. Maintain three distinct maximum values by checking if the current element is less than the current maximum
5. If we find a third distinct maximum, return it; otherwise return the first maximum

### Time Complexity: O(n log n)
- Dominated by the sorting operation

### Space Complexity: O(1)
- Only using a constant amount of extra space (ignoring the space used by sorting)

### Alternative Approach: Using Set
We could also use a `set` to track distinct values and find the three largest distinct values without sorting:
- Time Complexity: O(n)
- Space Complexity: O(n) for the set

## Implementation

See [Third-Maximum-Number.cpp](./Third-Maximum-Number.cpp) for the complete implementation.

## Key Points

- **Distinct Values**: We need three **distinct** maximum values, not just the top three elements
- **Edge Case**: If fewer than three distinct values exist, return the maximum
- **Overflow Handling**: Use `long long` to handle edge cases with `INT_MIN` and `INT_MAX`
