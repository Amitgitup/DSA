# 2058

# Find the Minimum and Maximum Number of Nodes Between Critical Points

- **LeetCode:** [Problem 2058 - Find the Minimum and Maximum Number of Nodes Between Critical Points](https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/)

## Problem
A critical point in a singly linked list is any node that is either:
- strictly greater than its neighbors, or
- strictly less than its neighbors.

Given the head of a singly linked list, find:
- the minimum distance between any two critical points, and
- the maximum distance between the first and last critical points.

If there are fewer than two critical points, return `[-1, -1]`.

## Approach (concise)
- Traverse the list while tracking the index of each critical point.
- For each new critical point after the first, compute the gap from the previous critical point.
- Keep the minimum gap among all consecutive critical points.
- The maximum gap is the distance between the first and last critical points.

## Complexity
- Time: O(n)
- Space: O(1)

## Example
Input: head = [1, 3, 2, 2, 3, 4, 5]
- Output: [2, 5]

## Implementation
- See [2058-Find-the-Minimum-and-Maximum-Number-of-Nodes-Between-Critical-Points.cpp](2058-Find-the-Minimum-and-Maximum-Number-of-Nodes-Between-Critical-Points.cpp)

## Build & Run (Windows PowerShell)
```powershell
g++ -std=c++17 Find-the-Minimum-and-Maximum-Number-of-Nodes-Between-Critical-Points.cpp -O2 -o critical.exe
.\critical.exe
```

## Tags
linked-list, critical-point, traversal, greedy
