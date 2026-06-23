
[LeetCode — Coin Change (322)](https://leetcode.com/problems/coin-change/)

**Problem:**
- **Description:** Given an integer array `coins` representing coin denominations and an integer `amount`, return the fewest number of coins needed to make up that `amount`. Return `-1` if the amount cannot be made up by any combination of the coins.

**Constraints:**
- **Input:** `coins.length >= 1`, `0 <= amount <= 10^4`, coin values are positive integers.

**Approach:**
- **DP (1D):** Use a dp array of size `amount+1` where `dp[x]` is the minimum coins to make amount `x`. Initialize `dp[0]=0`, others = INF. For each coin, for x from coin to amount: `dp[x] = min(dp[x], dp[x-coin] + 1)`.

**Complexity:**
- **Time:** O(n * amount) where `n = coins.length`.
- **Space:** O(amount).

**Example:**
- Input: `coins = [1,2,5]`, `amount = 11` → Output: `3` (11 = 5 + 5 + 1)

**Solution:**
- Implementation in C++: [322-Coin-Change-DP/coin-change.cpp](322-Coin-Change-DP/coin-change.cpp#L1)

If you want, I can add more details (bottom-up vs top-down, reconstruction, test harness).
