# LeetCode 44. Wildcard Matching

Link: https://leetcode.com/problems/wildcard-matching/

## Problem
Given an input string `s` and a pattern `p`, implement wildcard pattern matching with support for:
- `?` matches any single character.
- `*` matches any sequence of characters (including the empty sequence).

Return `true` if the pattern matches the whole string, otherwise return `false`.

## Key Idea
Use dynamic programming to compare pattern characters and string characters while handling the special wildcard semantics.

## Methods

### 1. Recursion
- Recursively check matches by exploring both branches when `*` appears:
  - `*` can match zero characters.
  - `*` can match one or more characters.
- For `?`, match one character.
- For exact characters, match only if equal.

Time complexity: `O(2^(m+n))` in the worst case.
Space complexity: `O(m+n)` for recursion stack.

### 2. Memoization (Top-Down DP)
- Use a 2D memo table `dp[i][j]` for pattern prefix length `i` and string prefix length `j`.
- Avoid recomputation by storing intermediate results.

Time complexity: `O(n * m)` where `n = p.length()` and `m = s.length()`.
Space complexity: `O(n * m)` for memo table plus `O(n+m)` recursion stack.

### 3. Tabulation (Bottom-Up DP)
- Build a 2D DP table iteratively.
- `dp[i][j]` indicates whether `p[0..i-1]` matches `s[0..j-1]`.
- Initialize base cases for empty pattern and empty string.

Time complexity: `O(n * m)`.
Space complexity: `O(n * m)`.

### 4. Space Optimization (2-Row DP)
- Only keep the previous row and current row of the DP table.
- This reduces memory from `O(n*m)` to `O(m)`.

Time complexity: `O(n * m)`.
Space complexity: `O(m)`.

### 5. 1-D Array Optimization
- Further optimize to a single 1D array by updating from right to left or carefully tracking the previous diagonal value.
- This still computes the same DP states in place.

Time complexity: `O(n * m)`.
Space complexity: `O(m)`.

## Notes
- `n` is the pattern length and `m` is the string length.
- The most expensive cost comes from pattern `*` handling, but DP ensures polynomial runtime.
- The 1-D optimization is typically used when memory is highly constrained.

## Example
Input: `s = "adceb"`, `p = "*a*b"`

Output: `true`

Explanation: `*` can match `"ad"` and the remaining pattern matches.
