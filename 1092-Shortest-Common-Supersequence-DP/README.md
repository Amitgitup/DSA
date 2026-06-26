# 1092. Shortest Common Supersequence

LeetCode: https://leetcode.com/problems/shortest-common-supersequence/

## Problem Summary
Given two strings, find the shortest common supersequence (SCS) that contains both of them as subsequences.

## Approach
- Use dynamic programming to build the answer length from the two strings.
- Let `dp[i][j]` be the length of the SCS for the prefixes `text1[0:i]` and `text2[0:j]`.
- If the current characters are equal, extend both prefixes:
  - `dp[i][j] = 1 + dp[i-1][j-1]`
- Otherwise, take the minimum of skipping one character from either string:
  - `dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1])`

## Complexity
- Time: `O(m * n)`
- Space: `O(m * n)`

This folder contains a C++ solution for the problem.
