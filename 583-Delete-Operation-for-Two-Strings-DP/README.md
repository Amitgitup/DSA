# LeetCode 583 - Delete Operation for Two Strings

- LeetCode problem: https://leetcode.com/problems/delete-operation-for-two-strings/

## Problem
Given two strings `word1` and `word2`, return the minimum number of delete operations needed to make the two strings equal.

Each operation deletes one character from either string.

## Approach
This solution computes the longest common subsequence (LCS) between `word1` and `word2`.

- Let `L` be the length of the LCS of `word1` and `word2`.
- The minimum number of deletions required is:
  - `(word1.length() - L) + (word2.length() - L)`
- The implementation uses a bottom-up DP table to compute LCS.

## Complexity
- Time: `O(n * m)`
- Space: `O(n * m)`

## Notes
- The problem reduces to preserving the longest common subsequence and deleting all other characters.
- The C++ implementation uses a 2D DP table of size `(n+1) x (m+1)`.
