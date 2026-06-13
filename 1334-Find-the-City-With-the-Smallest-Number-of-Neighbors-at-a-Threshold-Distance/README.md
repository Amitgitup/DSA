# LeetCode 1334 — Find the City With the Smallest Number of Neighbors at a Threshold Distance

[LeetCode 1334](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/)

**Problem:** Given n cities and weighted undirected edges, find the city with the smallest number of reachable cities within a given distance threshold. If multiple cities have the same smallest count, return the city with the greatest index.

**Approach:**
- Use all-pairs shortest paths (Floyd–Warshall) or run Dijkstra from each node to compute shortest distances.
- Count how many cities are reachable from each city with distance <= threshold.
- Select the city with the smallest count; if tied, choose the largest index.

**Complexity:**
- Floyd–Warshall: O(n^3) time, O(n^2) space.
- Dijkstra from each node: O(n * (m log n)) time (m = number of edges), O(n + m) space.

**Example:**

Input: n = 4, edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]], distanceThreshold = 4

Output: 3

Explanation: City 3 has the smallest number of reachable cities within distance 4.

**Source:**
- Solution file: [find-the-city-with-smallest-number-of-neighbors-at-a-threshold-distance.cpp](1334-Find-the-City-With-the-Smallest-Number-of-Neighbors-at-a-Threshold-Distance/find-the-city-with-smallest-number-of-neighbors-at-a-threshold-distance.cpp#L1)

**Compile & Run:**
```
g++ -std=c++17 -O2 -Wall find-the-city-with-smallest-number-of-neighbors-at-a-threshold-distance.cpp -o find_city
./find_city
```

If you want, I can also add a short note describing which method the repository's implementation uses (Floyd–Warshall or repeated Dijkstra).
