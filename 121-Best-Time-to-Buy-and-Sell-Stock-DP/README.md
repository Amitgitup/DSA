# LeetCode 121 - Best Time to Buy and Sell Stock

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem
Given an array `prices` where `prices[i]` is the price of a given stock on the `i`th day, return the maximum profit you can achieve from this transaction. You may complete at most one transaction (i.e., buy one and sell one share of the stock).

You must buy before you sell.

## Example

Input: `prices = [7,1,5,3,6,4]`
Output: `5`
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

## Approach
- Track the minimum price seen so far.
- For each price, compute the profit if sold at that price using `current price - min price so far`.
- Update the maximum profit when a higher profit is found.
- Update the minimum price when a lower price is seen.

## Complexity
- Time: `O(n)`
- Space: `O(1)`

## Code
See `best-time-to-buy-and-sellstock.cpp` for the implementation.
