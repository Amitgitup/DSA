# LeetCode 122 - Best Time to Buy and Sell Stock II

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

## Problem
Given an array `prices` where `prices[i]` is the price of a given stock on the `i`th day, return the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You must sell the stock before you buy again.

## Approach
- The problem allows unlimited transactions, so the optimal strategy is to add all positive price differences between consecutive days.
- This can be solved with dynamic programming using several approaches:
  - Recursion
  - Memoization
  - Tabulation
  - Space optimization
  - 1-D array optimization

## Time Complexity
- Recursion: `O(2^n)` in the worst case due to exploring all buy/sell decisions.
- Memoization: `O(n * 2)` → `O(n)` because there are `n` days and 2 states (`holding` or `not holding`).
- Tabulation: `O(n * 2)` → `O(n)`.
- Space optimization: `O(n * 2)` time and `O(1)` space.
- 1-D array optimization: `O(n)` time and `O(1)` space.

## Space Complexity
- Recursion: `O(n)` recursion stack depth.
- Memoization: `O(n * 2)` for DP cache, `O(n)` auxiliary recursion stack.
- Tabulation: `O(n * 2)` if using full table, or `O(1)` with optimized state variables.
- Space optimization: `O(1)`.
- 1-D array optimization: `O(1)`.

## Notes
- A simple greedy solution is to accumulate `(prices[i] - prices[i-1])` when it is positive.
- This works because any upward price movement can be captured by buying on the lower day and selling on the higher day.

## Code
See `122-best-time-to-buy-and-sell-stock-II.cpp` for the implementation.
