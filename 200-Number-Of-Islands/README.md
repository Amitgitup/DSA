# LeetCode 200: Number of Islands

## Problem
Given an `m x n` 2D grid map of `'1'`s (land) and `'0'`s (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

## Solution Overview
This implementation uses Breadth-First Search (BFS) to traverse each island and mark all connected land cells as visited.

### Key steps
- Iterate through every cell in the grid.
- When an unvisited land cell (`'1'`) is found, increment the island count.
- Launch BFS from that cell to visit all connected land cells in four directions.
- Use a `vis` matrix to avoid revisiting the same cell.

## C++ Implementation
The solution is implemented in `number-of-islands.cpp` using a `Solution` class with:
- `numIslands` for scanning the grid
- `bfs` helper to explore each island

## Time Complexity
- `O(m * n)` where `m` is the number of rows and `n` is the number of columns.
- Each cell is visited at most once.

## Space Complexity
- `O(m * n)` for the visited matrix and BFS queue in the worst case.

## Notes
- This solution handles large grids efficiently by avoiding repeated work.
- The BFS helper checks four neighbors: up, right, down, and left.
