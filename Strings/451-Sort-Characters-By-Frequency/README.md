# LeetCode 451 - Sort Characters By Frequency

Problem link: https://leetcode.com/problems/sort-characters-by-frequency/

## Problem
Given a string, sort it in decreasing order based on the frequency of characters.

## Approach
- Count the frequency of each character.
- Sort characters by decreasing frequency.
- Build and return the string by repeating each character according to its frequency.

## Notes
- If two characters have the same frequency, their relative order can be arbitrary.
- The input may include letters, digits, symbols, and mixed case characters.

## Implementation
- `Sort-Characters-By-Frequency.cpp` contains the solution.

## Example
Input: `"tree"`

Output: `"eetr"` or `"eert"`
