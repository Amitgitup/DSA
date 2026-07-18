# LeetCode 110: Balanced Binary Tree

LeetCode problem link: https://leetcode.com/problems/balanced-binary-tree/

## Problem
Given the root of a binary tree, determine if it is height-balanced.
A binary tree is balanced if the left and right subtrees of every node differ in height by no more than 1.

## Approach
- Recursively compute the height of each subtree.
- If any subtree is unbalanced, propagate a failure state.
- Check at each node that the height difference between left and right is at most 1.
- Return `true` only if every node satisfies the balanced condition.

## Complexity
- Time: O(n), where n is the number of nodes in the tree.
- Space: O(h) recursion stack, where h is the tree height.

## Solution file
- `Balanced-Binary-Tree.cpp`

## Notes
- This problem is commonly solved by combining depth calculation and balance checking in one traversal.
- Avoid repeated height computations by returning both height and balance status together.
