# 2897. Apply Operations on Array to Maximize Sum of Squares

- LeetCode: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/

## Problem
You are given an integer array `nums` and an integer `k`. In one operation, you can choose any element and add `1` to it. The goal is to maximize the sum of squares of the resulting `k` numbers after applying operations optimally.

In this problem, the key observation is:
- To maximize the sum of squares, we should build the numbers greedily from the highest bit counts available.
- Each bit position contributes to the final numbers based on how many numbers have that bit set.

## Approach
1. Count how many times each bit is set across all elements.
2. For each of the `k` numbers to construct:
   - take the highest available set bits greedily,
   - form the largest possible value using the remaining bit counts,
   - add its square modulo `10^9 + 7`.
3. Repeat until `k` numbers are created.

This works because each bit contributes independently, and choosing a larger bit earlier yields a larger square sum.

## Implementation Notes
- Use a frequency array of size 31 to count bits from `0` to `30`.
- For each constructed number, greedily include a bit if it is still available.
- Maintain the answer modulo `10^9 + 7`.

## Complexity
- Time complexity: O(31 * k)
- Space complexity: O(31)

## C++ Solution
The implementation is provided in the corresponding `.cpp` file in this folder.
