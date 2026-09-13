# 3483

# LeetCode 3483 - Unique 3-Digit Even Numbers

[LeetCode 3483](https://leetcode.com/problems/unique-3-digit-even-numbers/)

## Problem Summary
You are given a list of digits. Count how many distinct 3-digit even numbers can be formed using the digits in the array, under these conditions:
- the number must have exactly 3 digits
- the hundreds digit cannot be zero
- all three positions must come from different indices in the array
- the final number must be even
- duplicate values should only be counted once

## Approach
- Try every possible triplet of positions `(i, j, k)`.
- Ensure the hundreds digit is non-zero and all indices are distinct.
- Build the number as `digits[i] * 100 + digits[j] * 10 + digits[k]`.
- Insert each formed number into a set to avoid counting duplicates.
- Only count values divisible by 2.

## Complexity
- Time: O(n^3), since we iterate through all triplets of digits.
- Space: O(m), where `m` is the number of unique valid numbers generated.

## Solution File
See `Unique-3-Digit-Even-Numbers.cpp` for the implementation.
