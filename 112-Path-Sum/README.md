112

# Path Sum

LeetCode: https://leetcode.com/problems/path-sum/

Problem:
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

Example:
- Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
- Output: true

Approach:
- Use DFS (recursive or iterative) to track the running sum from root to leaves.
- When reaching a leaf, check if running sum equals `targetSum`.

Time Complexity: O(n) where n is number of nodes.
Space Complexity: O(h) where h is tree height (recursion stack).

Solution file: Path-Sum.cpp
