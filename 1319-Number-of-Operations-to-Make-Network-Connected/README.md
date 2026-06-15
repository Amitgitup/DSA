[LeetCode 1319 - Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/)

# Number of Operations to Make Network Connected (LC 1319)

Problem: Given n computers numbered from 0 to n-1 and a list of ethernet connections where connections[i] = [a, b] represents a connection between computers a and b, return the minimum number of operations needed to connect all the computers. An operation consists of removing an existing connection and placing it between two disconnected computers. If it's impossible to connect all computers, return -1.

Key observations:
- You need at least `n-1` edges to connect `n` nodes. If the number of given edges is less than `n-1`, return `-1` immediately.
- Otherwise, count the number of connected components (using Union-Find or DFS). The minimum operations required equals `components - 1` (you can rewire extra edges to connect components).

Approach (Union-Find / DSU):
1. If `m < n-1`, return `-1`.
2. Initialize DSU for `n` nodes and union each connection edge.
3. Count distinct roots to get number of connected components.
4. Answer is `components - 1`.

Time Complexity: O(n + m) amortized (nearly linear with DSU path compression).
Space Complexity: O(n).

Example:
Input: `n = 4`, `connections = [[0,1],[0,2],[1,2]]`
Output: `1` (one operation to connect node 3)

Solution file: [number-of-operations-to-ake-network-connected.cpp](1319-Number-of-Operations-to-Make-Network-Connected/number-of-operations-to-ake-network-connected.cpp#L1)

