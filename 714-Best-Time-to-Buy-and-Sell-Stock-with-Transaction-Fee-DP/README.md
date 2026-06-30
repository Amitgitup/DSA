# LeetCode 714 - Best Time to Buy and Sell Stock with Transaction Fee

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

## Problem
Given an integer array `prices` where `prices[i]` is the price of a given stock on the `i`th day, and an integer `fee` representing a transaction fee, return the maximum profit you can achieve. You may complete as many transactions as you like, but you must pay the fee for each transaction when you sell.

## Approach
- Solve using dynamic programming with states for holding or not holding a stock.
- Common solution styles:
  - Recursion
  - Memoization
  - Tabulation
  - Space optimization

## Time Complexity
- Recursion: `O(2^n)` in the worst case because each day can branch into buy, sell, or skip decisions without memoization.
- Memoization: `O(n * 2)` → `O(n)` because there are `n` days and 2 states (`holding` or `not holding`).
- Tabulation: `O(n * 2)` → `O(n)` for iterating through all days and states.
- Space optimization: `O(n * 2)` time and `O(1)` space by maintaining only the previous day's hold and cash states.

## Space Complexity
- Recursion: `O(n)` recursion stack depth.
- Memoization: `O(n * 2)` for cache storage.
- Tabulation: `O(n * 2)` if using full table; can be reduced to `O(1)` with optimization.
- Space optimization: `O(1)`.

## Notes
- The transaction fee is applied when selling, so the state transition accounts for `sell - fee`.
- The optimized DP keeps only two values: `hold` and `cash`.

## Code
See `Best-Time-to-Buy-and-Sell-Stock-with-Transaction-Fee.cpp` for the implementation.
