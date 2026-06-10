
# Path With Minimum Effort (LeetCode 1631)

## Problem

Given a 2D grid `heights` of size `m x n` where `heights[i][j]` represents the height of cell `(i, j)`, find a path from the top-left cell `(0,0)` to the bottom-right cell `(m-1,n-1)` such that the maximum absolute difference in heights between two consecutive cells on the path is minimized. Return the minimum possible value of this maximum difference.

You can move up, down, left, or right.

## Key idea / Intuition

We want to minimize the maximum edge cost along the chosen path, where the cost between adjacent cells is the absolute height difference. This is equivalent to finding the path that minimizes the maximum edge weight — a classic application of either:

- Binary search on the answer + BFS/DFS (check if a path exists with max allowed difference <= mid), or
- Dijkstra's algorithm where the path cost is the minimum possible of the maximum edge seen so far (use a priority queue storing current path's maximum edge and relax accordingly).

Both approaches are efficient; Dijkstra with a min-heap is straightforward and runs in O(m*n*log(m*n)).

## Solution (approach used)

Use a priority queue (min-heap) where each entry stores `(effort_so_far, r, c)`. `effort_so_far` is the maximum absolute difference encountered along the path to `(r,c)`. Start from `(0,0)` with effort 0. For each popped cell, try its 4 neighbors — the candidate effort to reach the neighbor is `max(effort_so_far, abs(height[cur] - height[nei]))`. If this candidate is smaller than the previously recorded effort for the neighbor, update and push to the heap. Stop when you pop the target cell.

## Complexity

- Time: O(m * n * log(m * n)) due to heap operations for each cell.
- Space: O(m * n) for distance/effort tracking and the heap.

## Example

Input:

```
heights = [
	[1,2,2],
	[3,8,2],
	[5,3,5]
]
```

Output: `2`

Explanation: One optimal path is `(0,0)->(0,1)->(0,2)->(1,2)->(2,2)` with edge differences `[1,0,0,3]` and maximum `3`. But a better path is `(0,0)->(1,0)->(2,0)->(2,1)->(2,2)` with differences `[2,2,2,2]` and maximum `2`.

## Reference implementation

See `path-with-minimum-effort.cpp` in this folder for a C++ implementation.

---

If you'd like, I can also add a short explanation inside the C++ file, or include the binary-search + BFS variant.
