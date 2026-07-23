# LeetCode 82: Remove Duplicates from Sorted List II

LeetCode problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

## Problem Summary

Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

## Key Points

- Input is a sorted singly linked list.
- Remove every node that has a duplicate value.
- Only values that appear exactly once in the original list should remain.
- The resulting list should maintain sorted order.

## Approach

A common solution uses a dummy node and two pointers:
1. Use a dummy node before the head to simplify edge cases.
2. Traverse the list with a pointer, and detect runs of duplicate values.
3. Skip all nodes that belong to duplicate runs.
4. Link unique nodes together.

## Example

Input: `1 -> 2 -> 3 -> 3 -> 4 -> 4 -> 5`
Output: `1 -> 2 -> 5`

Input: `1 -> 1 -> 1 -> 2 -> 3`
Output: `2 -> 3`

## Files

- `Remove-Duplicates-from-Sorted-List-II.cpp` - C++ solution implementation.
