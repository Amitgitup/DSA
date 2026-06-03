# LeetCode 1020 - Number of Enclaves

- Difficulty: Medium
- Topic: Graph traversal, Breadth-first search (BFS), Depth-first search (DFS)
- File: `number-of-encalves.cpp`

## Problem
Given a binary matrix `grid` where `0` represents sea and `1` represents land, an enclave is a land cell from which it is impossible to walk off the boundary of the grid by moving up, down, left, or right.

Return the number of land cells in all enclaves.

## Approach
1. Traverse all boundary cells of the grid.
2. For each boundary land cell (`grid[i][j] == 1`), run a BFS to mark all connected land cells that can reach the boundary.
3. Use a `vis` matrix to track visited cells during the traversal.
4. After marking all reachable land cells from the boundary, count the remaining land cells (`grid[i][j] == 1`) that were not visited.

These unvisited land cells represent enclaves.

## Complexity
- Time: `O(m * n)` where `m` is the number of rows and `n` is the number of columns.
- Space: `O(m * n)` for the visited matrix and BFS queue in the worst case.

## Notes
- The solution works by eliminating all land connected to the boarder first, leaving only true enclaves.
- The BFS directions are up, right, down, and left.

## Example
Input:
```
[[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
```
Output: `3`

Explanation: The three land cells in the middle cannot reach the boundary.
