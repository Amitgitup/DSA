827

# Making A Large Island

LeetCode: https://leetcode.com/problems/making-a-large-island/

Description
- Given an n x n binary grid, you may change at most one 0 to 1. Return the size of the largest island possible.

Approach
- Label each island with a unique id and record its size using DFS/BFS.
- For every 0 cell, sum sizes of its unique neighboring islands and add 1 (for the flipped cell).
- Track the maximum; handle the all-1 grid by returning n*n.

Complexity
- Time: O(n^2)
- Space: O(n^2)

C++ Implementation
- See [making-a-large-island.cpp](making-a-large-island.cpp)

Notes
- This solution uses island labeling to allow O(1) lookup of island sizes when inspecting 0-cells.

