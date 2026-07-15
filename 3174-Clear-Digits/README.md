# LeetCode 3174. Clear Digits

https://leetcode.com/problems/clear-digits/

## Problem

Given a string `s` consisting of lowercase letters and digits, process the string from left to right.

For each digit in `s`, remove the closest preceding non-digit character (if any), then discard the digit itself.

Return the resulting string after processing all characters.

### Example

Input: `s = "ab3c"
Output: "ac"

Explanation: digit `3` removes the preceding character `b`, then `3` is discarded.

## Approach

- Use a stack (or string builder acting like a stack) to build the result incrementally.
- Traverse the string one character at a time.
- If the character is a letter, push it onto the stack.
- If the character is a digit, pop one character from the stack if it is not empty.
- Ignore the digit itself after applying its effect.

## Complexity

- Time: `O(n)`, where `n` is the length of the string.
- Space: `O(n)`, due to the stack used to store characters.

## Implementation

- `Clear-Digits.cpp`

## Notes

- Digits `0` through `9` all remove at most one preceding character.
- If a digit appears when there is no preceding letter, the digit has no effect and is discarded.
