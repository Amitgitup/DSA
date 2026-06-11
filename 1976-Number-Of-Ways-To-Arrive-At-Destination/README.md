
# LC 1976 — Number of Ways to Arrive at Destination

Problem: Given a weighted directed graph with n nodes labeled from 0 to n-1 and an array of roads where roads[i] = [u, v, time], find the number of distinct ways to arrive at node n-1 from node 0 such that the total travel time is minimized. Return the count modulo 10^9 + 7.

LeetCode: https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/

Key idea:
- Use Dijkstra's algorithm to compute the shortest distance from node 0 to every node.
- While relaxing edges, also maintain a ways[] array where ways[v] is the number of shortest paths to v.
- When you find a shorter distance to v, set ways[v] = ways[u]. When you find an equal shortest distance, add ways[u] to ways[v].
- Take answers modulo 1e9+7.

Complexity:
- Time: O(E log V) due to Dijkstra using a min-heap (priority queue).
- Space: O(V + E) for adjacency representation and arrays.

Reference implementation:
- See [1976-Number-Of-Ways-To-Arrive-At-Destination/number-of-ways-to-arrive-at-destination.cpp](1976-Number-Of-Ways-To-Arrive-At-Destination/number-of-ways-to-arrive-at-destination.cpp) for a C++ solution in this folder.

Compile & run (example):
```bash
g++ -std=c++17 -O2 -I. -o ways number-of-ways-to-arrive-at-destination.cpp
./ways
```

Notes:
- Ensure graph edges are parsed as directed with given travel times.
- Use 64-bit integers for distances to avoid overflow when summing times.
