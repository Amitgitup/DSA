# LeetCode 242 - Valid Anagram

Problem link: https://leetcode.com/problems/valid-anagram/

## Problem
Given two strings `s` and `t`, determine if `t` is an anagram of `s`.

## Approach
- Count the frequency of each character in `s`.
- Count the frequency of each character in `t`.
- Compare the character counts; if they match, `t` is an anagram of `s`.

## Notes
- An anagram must use the exact same characters with the same frequencies.
- The strings may contain lowercase letters and/or other characters depending on the implementation.

## Implementation
- `Valid-Anagram.cpp` contains the solution.

## Example
Input: `s = "anagram"`, `t = "nagaram"`

Output: `true`
