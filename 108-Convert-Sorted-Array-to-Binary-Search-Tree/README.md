# LeetCode 108: Convert Sorted Array to Binary Search Tree

- LeetCode problem: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

## Problem
Given an integer array `nums` where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differs by more than one.

## Approach
- Use a divide and conquer strategy.
- Select the middle element of the current array/subarray as the root.
- Recursively build the left subtree from the left half and the right subtree from the right half.
- This produces a balanced BST because the root splits the array into two roughly equal halves.

## Complexity
- Time: `O(n)`
- Space: `O(log n)` for recursion stack on a balanced tree

## Notes
- This solution assumes the input array is already sorted.
- The tree is height-balanced by construction.
