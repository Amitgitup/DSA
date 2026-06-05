# LeetCode 785 — Is Graph Bipartite?

Problem summary
- Given an undirected graph represented as an adjacency list, determine if the graph is bipartite (i.e., its vertices can be colored with two colors so that no two adjacent vertices share the same color).

Approach (Graph Coloring)
- Use graph coloring with two colors (0 and 1). For each unvisited node, run a BFS or DFS to assign colors to reachable nodes.
- If during traversal a neighbor has the same color as the current node, the graph is not bipartite.

Algorithms
- BFS: push start node into queue, color it 0, then for each node pop and color uncolored neighbors with 1 - color[cur]. Detect conflicts when neighbor already colored with same color.
- DFS: recursively color neighbors and return false on conflict.
- Union-Find: alternate approach by grouping neighbors, but coloring is simpler and more direct.

Complexity
- Time: O(V + E) — each vertex and edge processed once across traversals.
- Space: O(V) — color array + BFS queue / DFS recursion stack.

Edge cases
- Disconnected graph: iterate all nodes and start BFS/DFS for unvisited ones.
- Single node or empty graph: trivially bipartite.

Reference implementation
- See the solution file: [is-graph-bipartite.cpp](785-Is-Graph-Bipartite/is-graph-bipartite.cpp#L1)

Notes
- This README gives the essential idea; both BFS and DFS implementations are acceptable. Use iterative BFS to avoid recursion-depth issues on large graphs.
