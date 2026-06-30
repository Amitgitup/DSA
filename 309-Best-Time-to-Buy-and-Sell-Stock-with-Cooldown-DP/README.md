# LeetCode 309 - Best Time to Buy and Sell Stock with Cooldown

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/

## Problem
Given an integer array `prices` where `prices[i]` is the price of a given stock on the `i`th day, return the maximum profit you can achieve. You may complete as many transactions as you like, but after you sell a stock, you cannot buy on the next day (cooldown one day).

## Approach
- Model the problem with states for whether you hold a stock, are in cooldown, or are free to buy.
- Common dynamic programming approaches:
  - Recursion
  - Memoization
  - Tabulation
  - Space optimization
  - 1-D array optimization

## Time Complexity
- Recursion: `O(3^n)` in the worst case, because each day can branch into buy, sell, or skip without memoization.
- Memoization: `O(n * 3)` → `O(n)` because there are `n` days and a constant number of states (`hold`, `sold`, `rest`).
- Tabulation: `O(n * 3)` → `O(n)` for iterating through all days and states.
- Space optimization: `O(n * 3)` time and `O(1)` space by keeping only previous-day state values.
- 1-D array optimization: `O(n)` time and `O(1)` space when compressing state transitions into single scalar variables.

## Space Complexity
- Recursion: `O(n)` recursion stack depth.
- Memoization: `O(n * 3)` for cache storage.
- Tabulation: `O(n * 3)` if using full tables; can be reduced to `O(1)` with optimization.
- Space optimization: `O(1)`.
- 1-D array optimization: `O(1)`.

## Notes
- The cooldown constraint means after selling a stock, the next day cannot be used to buy.
- The optimized DP uses three states per day: hold, sold, and rest.

## Code
See `309-Best-Time-to-Buy-and-Sell-Stock-with-Cooldown.cpp` for the implementation.
