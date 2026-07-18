# LeetCode 111 - Minimum Depth of Binary Tree

LeetCode link: https://leetcode.com/problems/minimum-depth-of-binary-tree/

## Problem
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

A leaf is a node with no children.

## Approach
- Use depth-first search (DFS) or breadth-first search (BFS).
- For DFS, recursively compute the minimum depth of left and right subtrees.
- Handle nodes with a single child carefully: if one child is missing, the depth should come from the non-null child.
- For BFS, traverse level by level and return the depth when the first leaf node is encountered.

## Example
Input:
```
    3
   / \
  9  20
    /  \
   15   7
```
Output: `2`

## Notes
- If the tree is empty, the minimum depth is `0`.
- The minimum depth differs from maximum depth because you stop at the nearest leaf.
- A node with only one child is not a leaf.

## Solution
Include a code implementation in the same folder for reference.
