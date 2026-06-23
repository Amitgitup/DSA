518

# LeetCode 518 - Coin Change 2

LeetCode problem: https://leetcode.com/problems/coin-change-2/

Description
- Given an integer `amount` and a list of distinct coin denominations `coins`, return the number of combinations that make up the `amount`.
- Order of coins does not matter (combinations, not permutations).

Approach (DP - 1D)
- Use a 1D DP array `dp` of size `amount + 1` where `dp[i]` is number of ways to make amount `i`.
- Initialize `dp[0] = 1` (one way to make amount 0).
- For each coin in `coins`, for `i` from `coin` to `amount`: `dp[i] += dp[i - coin]`.

Time Complexity: O(n * m) where `n = coins.size()` and `m = amount`.
Space Complexity: O(m).

See solution: coin-change-II.cpp
