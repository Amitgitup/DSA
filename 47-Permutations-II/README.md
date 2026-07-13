47

# Permutations II

LeetCode: https://leetcode.com/problems/permutations-ii/

## Problem

Given a collection of numbers that might contain duplicates, return all possible unique permutations.

### Example

Input: [1,1,2]

Output:

[
  [1,1,2],
  [1,2,1],
  [2,1,1]
]

## Approach

Sort the input and use backtracking. Maintain a `used` array; when considering `nums[i]`, skip it if `i>0 && nums[i]==nums[i-1] && !used[i-1]` to avoid duplicates.

## Complexity

- Time: O(n * n!) in the worst case (producing all permutations)
- Space: O(n) recursion depth plus output storage

## Files

- Solution: [47-Permutations-II/Permutations-II.cpp](47-Permutations-II/Permutations-II.cpp)

## Notes

This README provides a concise summary and links to the implementation. Run or compile the .cpp file to test the solution locally.