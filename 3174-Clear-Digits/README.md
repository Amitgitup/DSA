# LeetCode 3174. Clear Digits

https://leetcode.com/problems/clear-digits/

## Problem

Given a string `s` consisting of lowercase letters and digits, process the string from left to right. For each digit, remove the closest preceding non-digit character (if any) and discard the digit itself.

Return the resulting string after all characters have been processed.

## Solution

- Iterate through the input string using a stack.
- If the current character is a digit (`0`-`9`), pop one character from the stack if it exists.
- If the current character is a lowercase letter, push it onto the stack.
- After processing, reconstruct the output string from the stack.

## Complexity

- Time: `O(n)` where `n` is the length of the string.
- Space: `O(n)` for the stack.

## Implementation

- `Clear-Digits.cpp`

## Notes

- The implementation supports digits `0` through `9`.
- If a digit appears with no preceding letter to remove, it is simply ignored.
