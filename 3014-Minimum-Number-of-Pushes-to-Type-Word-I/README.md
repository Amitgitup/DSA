# LeetCode 3014: Minimum Number of Pushes to Type Word I

- LeetCode: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/

## Problem
Given a keyboard with 4 rows of 8 keys each, compute the minimum number of pushes required to type the input word. Each character in the word is typed by pressing the key containing it.

## Approach
- Every character in the word can be typed in one push because the keyboard layout is fixed and each letter belongs to one key.
- The minimum pushes is simply the length of the word.

## Implementation Notes
- The provided solution counts each character and returns the total number of characters.
- Time complexity: O(n), where n is the length of the input word.
- Space complexity: O(1).
