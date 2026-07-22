# LeetCode 83 - Remove Duplicates from Sorted List

Problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

## Problem
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

## Approach
- Since the list is already sorted, duplicate values always appear consecutively.
- Traverse the list with a pointer `current`.
- If `current->next` exists and has the same value as `current`, skip the duplicate by linking `current->next` to `current->next->next`.
- Otherwise, move `current` forward.
- Continue until the end of the list.

## Key idea
- Keep one copy of each value and drop the repeated nodes by adjusting pointers.
- No extra data structure is needed.

## Time Complexity
- O(n), where n is the number of nodes in the linked list.

## Space Complexity
- O(1), only constant extra space is used.

## Code
Refer to `Remove-Duplicates-from-Sorted-List.cpp` for the implementation.

## Notes
- This solution works only because the list is sorted.
- If the list were unsorted, a different strategy would be required (for example, using a hash set).
