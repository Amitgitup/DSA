**LeetCode 787 — Cheapest Flights Within K Stops**

- **Problem:** Given `n` cities and a list of `flights` where each flight is `(u, v, w)` (from `u` to `v` with cost `w`), find the cheapest price from source `src` to destination `dst` with at most `K` stops. Return -1 if no such route exists.

- **Constraints:**
	- `1 <= n <= 100`
	- `0 <= flights.length <= 1000`
	- `0 <= K < n`
	- Weights are non-negative integers.

**Example**

- Input:

	n = 3

	flights = [[0,1,100],[1,2,100],[0,2,500]]

	src = 0, dst = 2, K = 1

- Output: 200

**Approach (concise)**

- Use a modified shortest-path search that respects the stop limit. Two common approaches:
	- BFS/level-order with a min-heap (Dijkstra variant) that tracks `(cost, city, stops)` and only expands states with stops <= K.
	- Bellman-Ford relaxation repeated `K+1` times to propagate minimum costs with up-to-`K` stops.

- The repository solution follows a priority-queue approach (Dijkstra-like) constrained by stops.

**Time & Space Complexity**

- Time: O(E log V) in typical Dijkstra-like runs with a heap, but the `K` constraint can increase states; worst-case ≈ O((K+1) * E log V).
- Space: O(V + E) for graph storage and O(V * K) for expanded states in the worst case.

**Files**
- Solution: [cheapest-flights-within-k-stops.cpp](cheapest-flights-within-k-stops.cpp)

**Compile & Run**

```bash
g++ -std=c++17 cheapest-flights-within-k-stops.cpp -O2 -o cheapest
./cheapest
```

**Notes**
- The solution returns `-1` if `dst` is unreachable within `K` stops.
- Adjust compile flags for your environment if needed.

