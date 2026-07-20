100

# Same Tree

LeetCode: https://leetcode.com/problems/same-tree/

Problem:
Given the roots of two binary trees, write a function to check if they are the same or not. Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example:
- Input: p = [1,2,3], q = [1,2,3]
- Output: true

Approach:
- Recursively compare corresponding nodes in both trees.
- If both nodes are null -> equal; if one is null -> not equal.
- If values differ -> not equal; otherwise recurse on left and right children.

Time Complexity: O(n) where n is the number of nodes (visit each node once).
Space Complexity: O(h) recursion stack where h is tree height.

Solution file: Same-Tree.cpp
