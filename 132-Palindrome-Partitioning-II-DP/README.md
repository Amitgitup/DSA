# LeetCode 132 - Palindrome Partitioning II

LeetCode link: https://leetcode.com/problems/palindrome-partitioning-ii/

## Problem
Given a string `s`, partition `s` such that every substring of the partition is a palindrome. Return the minimum cuts needed for a palindrome partitioning of `s`.

## Approach
- Use recursion to explore all valid palindrome partitions.
- Add memoization to avoid recomputing the same substring results.
- Use tabulation (bottom-up DP) to compute the minimum cuts iteratively.
- Precompute palindrome substrings when possible to optimize repeated palindrome checks.

## Time Complexity
- Recursion: `O(n^3)`
  - Pure recursive backtracking checks all partition points and validates palindromes on the fly.
  - Palindrome validation over substrings adds an extra `O(n)` factor.

- Memoization: `O(n^2)`
  - Top-down DP stores results for each start index.
  - With a precomputed palindrome table, each state explores up to `O(n)` cuts and uses `O(1)` palindrome checks.

- Tabulation: `O(n^2)`
  - Bottom-up DP computes minimum cuts for all prefixes.
  - With precomputed palindrome substrings, each prefix explores possible cut positions in `O(n)` time.

## Notes
- The best solution uses dynamic programming and palindrome preprocessing to avoid repeated substring checks.
- This problem is a classic example of transforming an exponential recursion into a polynomial-time DP solution.
