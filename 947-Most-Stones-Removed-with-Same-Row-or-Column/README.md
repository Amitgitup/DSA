# 947. Most Stones Removed with Same Row or Column

LeetCode: https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/

Problem
- Given a list of stones on a 2D plane where each stone is at integer coordinates, a move consists of removing a stone that shares the same row or column with another stone. Return the maximum number of stones that can be removed.

Example
- Input: [[0,0],[0,1],[1,0],[1,2],[2,1],[2,2]]
- Output: 5

Idea / Approach
- Model stones as nodes in a graph where edges connect stones in the same row or same column.
- The maximum removable stones = total stones - number of connected components (each component must leave at least one stone).
- Two common implementations:
	- Union-Find (disjoint set) on stone indices or map rows/columns to nodes.
	- DFS/BFS to count connected components.

Complexity
- Time: O(n * α(n)) for Union-Find (or O(n + E) for DFS), where n = number of stones.
- Space: O(n) for parent/visited structures.

Solution
- See the implementation: [most-stones-removed-same-row-or-column.cpp](most-stones-removed-same-row-or-column.cpp#L1)

Notes
- This README provides a short summary and links; for detailed discussion consider checking the LeetCode problem page above.

