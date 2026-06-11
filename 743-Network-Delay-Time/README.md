
# LeetCode 743 — Network Delay Time

Problem link: https://leetcode.com/problems/network-delay-time/

## Problem
There are N network nodes, labeled 1 to N. You are given times, a list of travel times as directed edges times[i] = (u, v, w), where u is the source node, v is the target node, and w is the time it takes for a signal to travel from source to target. We send a signal from node K. How long will it take for all nodes to receive the signal? If it's impossible for all the nodes to receive the signal, return -1.

## Constraints
- 1 <= N <= 100
- 1 <= times.length <= 6000
- times[i].length == 3
- 1 <= u, v <= N
- 0 <= w <= 100

## Approach
Use Dijkstra's algorithm (priority queue) from source `K` to compute shortest travel times to all nodes. Since edge weights are non-negative, Dijkstra gives the fastest single-source shortest paths.

Steps:
- Build adjacency list from `times`.
- Use a min-heap (priority queue) seeded with `(0, K)`.
- Pop the node with smallest current distance, relax its outgoing edges, and push updated distances into the heap.
- Track visited/confirmed distances to avoid extra work.
- After processing, the answer is the maximum distance among all nodes; if any node is unreachable, return -1.

Alternative: Bellman-Ford also works (O(N * E)) but is slower here.

## Complexity
- Time: O(E log V) using a binary heap (E = number of edges, V = N)
- Space: O(V + E)

## Example
Input: N = 4, times = [[2,1,1],[2,3,1],[3,4,1]], K = 2
Output: 2

Explanation: shortest times from node 2 are {1:1, 2:0, 3:1, 4:2}. Maximum is 2.

## Solution
See the implementation in `network-delay-time.cpp` in this folder.

