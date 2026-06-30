# LeetCode 188 - Best Time to Buy and Sell Stock IV

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

## Problem
Given an integer array `prices` where `prices[i]` is the price of a given stock on the `i`th day, and an integer `k`, return the maximum profit you can achieve. You may complete at most `k` transactions.

Note: You must sell the stock before you buy again.

## Approach
- The problem can be solved using dynamic programming with state tracking for day, transactions used, and whether the stock is currently held.
- Common solution styles include:
  - Recursion
  - Memoization
  - Tabulation
  - Space optimization
  - 1-D array optimization

## Time Complexity
- Recursion: `O(2^(n*k))` in the worst case because each day may branch into buy, sell, or skip decisions without pruning.
- Memoization: `O(n * k * 2)` because there are `n` days, `k+1` transaction states, and 2 holding states.
- Tabulation: `O(n * k * 2)` for filling the DP table iteratively.
- Space optimization: `O(n * k * 2)` time and `O(k * 2)` space by using only the previous transaction layer.
- 1-D array optimization: `O(n * k)` time and `O(k)` space when compressing DP into a single dimension over transactions.

## Space Complexity
- Recursion: `O(n)` recursion stack depth plus any auxiliary state.
- Memoization: `O(n * k * 2)` for cache storage.
- Tabulation: `O(n * k * 2)` if using the full table; can be reduced with optimization.
- Space optimization: `O(k * 2)`.
- 1-D array optimization: `O(k)`.

## Notes
- When `k >= n/2`, the problem reduces to Best Time to Buy and Sell Stock II, allowing greedy accumulation of positive price differences.
- Optimized solutions exploit the fact that only the previous day's transaction state is needed to compute the current state.

## Code
See `Best-Time-to-Buy-and-Sell-Stock-IV.cpp` for the implementation.
