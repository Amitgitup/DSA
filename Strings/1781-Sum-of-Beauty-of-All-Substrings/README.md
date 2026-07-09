# LeetCode 1781: Sum of Beauty of All Substrings

Official problem link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/

## Problem
The beauty of a string is defined as the count of the most frequent character minus the count of the least frequent character among the characters that appear in the string.

Given a string `s`, return the sum of the beauty values of all substrings of `s`.

## Solution
Implementation is provided in `Sum-of-Beauty-of-All-Substrings.cpp`.

## Notes
- The problem can be solved by iterating over all start indices and tracking character frequencies efficiently.
- Time complexity is typically O(n * alphabet_size) for each starting position.
- Use frequency arrays to avoid repeated scanning of substrings.
