# LeetCode 802 — Find Eventual Safe States

Problem
- Given a directed graph of n nodes labeled from 0 to n-1, represented as an adjacency list `graph`, return a list of all eventual safe nodes in ascending order.
- A node is eventual safe if every possible path starting from that node leads to a terminal node (a node with no outgoing edges). Equivalently, nodes that are not part of or lead to a cycle.

Example
- Input: `graph = [[1,2],[2,3],[5],[0],[5],[],[]]`
- Output: `[2,4,5,6]`

Approach (Kahn's algorithm on reversed graph)
- Reverse all edges: for each edge u -> v in the original graph add v -> u in reversed graph.
- Compute out-degree (number of outgoing edges) for each node in the original graph.
- Initialize a queue with all terminal nodes (out-degree == 0).
- Repeatedly pop node `u` from the queue and for each neighbor `v` in the reversed graph decrement `out-degree[v]`. If `out-degree[v]` becomes 0 push `v` to the queue.
- All nodes processed by this topological-like order are eventual safe nodes. Return them sorted.

Complexity
- Time: O(V + E) where V is number of nodes and E is number of edges.
- Space: O(V + E) for the reversed graph and auxiliary arrays.

Reference implementation
- See the C++ solution: [802-Find-Eventual-Safe-States/find-eventual-safe-states.cpp](802-Find-Eventual-Safe-States/find-eventual-safe-states.cpp)

Compile & run
- Compile: `g++ -std=c++17 -O2 find-eventual-safe-states.cpp -o safe_states.exe`
- Run: `./safe_states.exe` (or on Windows `safe_states.exe`)

Notes
- This README provides a concise explanation and quick usage. If you want, I can add detailed walkthroughs, diagrams, or multiple solution variants (DFS coloring method).
