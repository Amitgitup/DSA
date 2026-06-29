# LeetCode 123 - Best Time to Buy and Sell Stock III

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

## Problem
Given an array `prices` where `prices[i]` is the price of a given stock on the `i`th day, return the maximum profit you can achieve. You may complete at most two transactions.

Note: You must sell the stock before you buy again.

## Approach
- This problem can be solved by modeling states for buy/sell operations across transactions.
- Common dynamic programming approaches include:
  - Recursion
  - Memoization
  - Tabulation
  - Space optimization
  - 1-D array optimization

## Time Complexity
- Recursion: `O(4^n)` in the worst case if every day branches into buy/sell/skip decisions for up to two transactions.
- Memoization: `O(n * 4)` → `O(n)` because there are `n` days and 4 states for the transaction/buy-sell progress.
- Tabulation: `O(n * 4)` → `O(n)`.
- Space optimization: `O(n * 4)` time and `O(1)` space using constant state variables.
- 1-D array optimization: `O(n)` time and `O(1)` space when reducing state transitions to a few variables.

## Space Complexity
- Recursion: `O(n)` recursion stack depth.
- Memoization: `O(n * 4)` for DP cache plus `O(n)` recursion stack.
- Tabulation: `O(n * 4)` if using full DP table.
- Space optimization: `O(1)`.
- 1-D array optimization: `O(1)`.

## Notes
- For two transactions, track the best profit after each buy and sell step separately.
- Alternatively, split the array into two subarrays and compute maximum profit on each side, then combine.

## Code
See `best-time-to-buy-and-sell-III.cpp` for the implementation.
