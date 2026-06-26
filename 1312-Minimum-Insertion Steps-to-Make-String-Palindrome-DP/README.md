# LeetCode 1312 - Minimum Insertion Steps to Make a String Palindrome

- LeetCode problem: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

## Problem
Given a string `s`, return the minimum number of insertions needed to make `s` a palindrome.

You may insert characters at any position in the string.

## Approach
This solution uses the longest common subsequence (LCS) between `s` and its reverse `t`.

- Let `t` be the reverse of `s`.
- The length of the longest palindromic subsequence in `s` equals the LCS of `s` and `t`.
- Minimum insertions needed = `n - LCS(s, t)`, where `n` is the length of `s`.
- The implementation computes LCS with a bottom-up DP table.

## Complexity
- Time: `O(n^2)`
- Space: `O(n^2)`

## Notes
- The main idea is that making a string palindrome by insertions is equivalent to preserving the longest palindromic subsequence and inserting the remaining characters.
- The solution uses DP for LCS between `s` and `reverse(s)`.
