# LeetCode 901: Online Stock Span

Link: https://leetcode.com/problems/online-stock-span/

## Problem
Design a class `StockSpanner` that collects daily stock price quotes and returns the stock span for the current day. The stock span is the number of consecutive days leading up to today for which the price was less than or equal to today's price.

## Approach
- Use a monotonic stack to store pairs of `(price, span)` or `(price, index)`.
- For each new price, pop lower or equal prices from the stack and accumulate their spans.
- Push the current price with its computed span onto the stack.
- Return the current day's span.

## Complexity
- Time: amortized O(1) per query, O(n) overall for n prices.
- Space: O(n), for the stack storing price/span entries.

## Notes
- This is an online algorithm: each price is processed in sequence.
- Using stack compression avoids re-scanning past prices repeatedly.
