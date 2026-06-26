# LeetCode 516 - Longest Palindromic Subsequence

- LeetCode problem: https://leetcode.com/problems/longest-palindromic-subsequence/

## Problem
Given a string `s`, return the length of the longest palindromic subsequence in `s`.

A subsequence is a sequence that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.

## Approach
This solution reduces the problem to the longest common subsequence (LCS) between the given string `s` and its reverse.

- Let `t` be the reverse of `s`.
- The longest palindromic subsequence in `s` is the LCS of `s` and `t`.
- Use dynamic programming with a 2D `dp` table of size `(n+1) x (n+1)`.

## Complexity
- Time: `O(n^2)`
- Space: `O(n^2)`

## Notes
- This approach works because any palindromic subsequence in `s` appears as a common subsequence between `s` and its reverse.
- The implementation uses a bottom-up DP table to compute LCS.
