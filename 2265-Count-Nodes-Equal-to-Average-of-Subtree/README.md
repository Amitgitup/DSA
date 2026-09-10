2265

LeetCode: https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/

Problem
- Given the root of a binary tree, return the number of nodes such that the value of the node is equal to the average of the values in its subtree.

Approach
- Use a post-order DFS that returns (sum, count) for each subtree.
- For each node, compute average = sum / count (integer division) and compare with node->val; increment a global counter when equal.

Complexity
- Time: O(n) — visit each node once.
- Space: O(h) recursion stack, where h is tree height.

Reference
- Solution (C++): Count-Nodes-Equal-to-Average-of-Subtree.cpp

