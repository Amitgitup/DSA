# LeetCode 1047. Remove All Adjacent Duplicates In String

https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

## Problem

Given a string `s`, repeatedly remove pairs of adjacent equal characters until no more such pairs remain. Return the final string after all possible removals.

## Solution

- Use a stack to process characters in a single pass.
- Push each character onto the stack.
- If the incoming character matches the stack top, pop the stack instead of pushing it.
- After processing, reconstruct the answer from the stack.

## Complexity

- Time: `O(n)` where `n` is the length of `s`.
- Space: `O(n)` for the stack.

## Implementation

- `Remove-All-Adjacent-Duplicates-In-String.cpp`

## Notes

- The solution handles repeated removals naturally because adjacent duplicates are removed as soon as they form.
- Final result is built by reversing the stack contents.
