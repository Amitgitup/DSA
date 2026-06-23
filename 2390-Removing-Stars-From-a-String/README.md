# 2390 — Removing Stars From a String

LeetCode: https://leetcode.com/problems/removing-stars-from-a-string/

## Problem
Given a string s containing lowercase English letters and the character `*`, process the string from left to right. Each time you encounter a `*`, remove the closest non-removed character to its left. Return the resulting string after all stars have been processed.

## Constraints
- 1 <= s.length <= 10^5
- `s` contains lowercase letters and `*` only.

## Approach
- Use a stack-like build: iterate characters, push letters to a result string, and pop the last letter when encountering `*`.
- This can be implemented with a mutable string and an index pointer to avoid extra STL stack overhead.

## Complexity
- Time: O(n)
- Space: O(n) worst-case (result string)

## Example
Input: "leet**cod*e"
Output: "lecoe"

Explanation: process characters and remove preceding letters where `*` appears.

## Code
Solution implementation: `removing-stars-from-a-string.cpp`

## Notes
- Tested against typical cases: consecutive stars, no stars, all stars.

