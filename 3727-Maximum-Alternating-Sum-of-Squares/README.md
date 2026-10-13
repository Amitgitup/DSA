# 3727. Maximum Alternating Sum of Squares

https://leetcode.com/problems/maximum-alternating-sum-of-squares/

## Problem

You are given an array of integers `nums`. The goal is to maximize the alternating sum of the squares of the elements after arranging them in a specific order.

A common optimal strategy is to sort the numbers by absolute value and then assign the smaller half to the subtraction side and the larger half to the addition side. This ensures the largest square values contribute with a positive sign in the final result.

## Solution

- Sort the array by absolute value in ascending order.
- For the first half of the sorted array, add the square to the subtraction total.
- For the second half, add the square to the addition total.
- Return:

`add - sub`

This works because placing larger absolute values on the positive side and smaller ones on the negative side maximizes the final alternating sum.

## Complexity

- Time: `O(n log n)` due to sorting.
- Space: `O(1)` extra space (ignoring the input array).

## Implementation

- `Maximum-Alternating-Sum-of-Squares.cpp`

## Notes

- The key observation is that the maximum value is achieved by ordering elements by absolute value, then alternating the contribution signs.
- The solution is efficient and simple for the given constraints.
