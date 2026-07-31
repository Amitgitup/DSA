# LeetCode 3016: Minimum Number of Pushes to Type Word II

- LeetCode: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/

## Problem
Given a keyboard with 4 rows of 8 keys each, find the minimum number of pushes needed to type the word by assigning the 26 lowercase letters to the keys optimally.

## Approach
- Count the frequency of each letter in the word.
- Assign the most frequent letters to the keys with the smallest push cost.
- The key costs are:
  - first 8 keys: 1 push per letter
  - next 8 keys: 2 pushes per letter
  - next 8 keys: 3 pushes per letter
  - last 2 keys: 4 pushes per letter
- Sort letter frequencies in descending order and accumulate weighted costs.

## Implementation Notes
- The provided solution computes the frequency of each letter, sorts frequencies, and sums the weighted push cost.
- Time complexity: O(n + 26 log 26) ˜ O(n).
- Space complexity: O(1).
