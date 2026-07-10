# LeetCode 22: Generate Parentheses

Link: https://leetcode.com/problems/generate-parentheses/

## Problem
Given `n` pairs of parentheses, generate all combinations of well-formed parentheses.

## Approach
- Use backtracking to build valid parentheses strings.
- Track the number of open and close parentheses used so far.
- Only add `)` when the number of close parentheses is less than the number of open parentheses.
- Stop when the current string length reaches `2 * n`.

## Complexity
- Time: O(Catalan(n)) in terms of number of valid combinations generated, roughly `O(4^n / sqrt(n))`.
- Space: O(n) recursion depth plus output storage.

## Notes
- This implementation generates all well-formed parentheses strings for the given number of pairs.
- Make sure the input `n` is non-negative.
