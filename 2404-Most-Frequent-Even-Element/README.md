# LeetCode 2404 - Most Frequent Even Element

Problem link: https://leetcode.com/problems/most-frequent-even-element/

## Problem
Given an integer array, return the most frequent even element. If there are multiple candidates, return the smallest one. If no even element exists, return `-1`.

## Approach
- Count frequencies of even numbers only.
- Track the maximum frequency and smallest number among those with that frequency.
- Return the selected even number or `-1` if none exist.

## Notes
- Only even elements are considered.
- The smallest element is chosen when frequencies tie.

## Implementation
- `Most-Frequent-Even-Element.cpp` contains the solution.

## Example
Input: `[0,1,2,2,4,4,1]`

Output: `2`
