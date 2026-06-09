# LeetCode 1091 — Shortest Path in Binary Matrix

Problem: Given an n x n binary matrix `grid`, return the length of the shortest clear path in the matrix from the top-left cell (0,0) to the bottom-right cell (n-1,n-1). A clear path is one where every visited cell has value `0`. You may move in 8 directions (horizontal, vertical, diagonal). If no such path exists, return `-1`.

LeetCode: https://leetcode.com/problems/shortest-path-in-binary-matrix/

Constraints:
- `1 <= n <= 100`
- `grid[i][j]` is `0` or `1`

Example:

Input:
```
grid = [[0,1],[1,0]]
```
Output: `2`

Approach (BFS):
- If `grid[0][0] == 1` or `grid[n-1][n-1] == 1`, return `-1` immediately.
- Use Breadth-First Search from `(0,0)` and expand in 8 directions.
- Track distance (or level) for each visited cell; when reaching `(n-1,n-1)` return the distance.
- Mark visited cells (e.g., set to `1`) to avoid revisiting.

Why BFS: BFS finds the shortest path in an unweighted grid graph by exploring level-by-level.

Time complexity: O(n^2) — each cell is visited at most once.
Space complexity: O(n^2) — queue and visited tracking in worst case.

Reference implementation: [shortest-path-in-binary-matrix.cpp](shortest-path-in-binary-matrix.cpp)

Compile & run (g++):
```bash
g++ -std=c++17 -O2 shortest-path-in-binary-matrix.cpp -o spbm
./spbm
```

Notes:
- The provided C++ solution file implements the BFS described above with 8-direction moves.
