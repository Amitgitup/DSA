
# 198. House Robber

LeetCode: https://leetcode.com/problems/house-robber/

Problem
-------
You are a robber planning to rob houses along a street. Each house has a certain amount of money stashed. Adjacent houses have security systems connected — if two adjacent houses are broken into on the same night, the police will be alerted. Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

Approach
--------
- Use dynamic programming. For each house i, maintain the maximum money that can be robbed up to that house.
- Recurrence: `dp[i] = max(dp[i-1], dp[i-2] + nums[i])`.
- Optimize to O(1) space by keeping two variables for `prev` and `curr`.

Complexity
----------
- Time: O(n)
- Space: O(1)

Solution
--------
See the implementation in [house-robber.cpp](house-robber.cpp#L1).

Usage
-----
Compile and run (example):

```bash
g++ -std=c++17 house-robber.cpp -O2 -o house_robber
./house_robber
```
