# LeetCode 207 — Course Schedule

Problem: Determine if you can finish all courses given prerequisite pairs (directed graph cycle detection).

Link: https://leetcode.com/problems/course-schedule/

Idea
- Model courses as graph nodes and prerequisites as directed edges u -> v meaning to take v you must take u first.
- The task reduces to detecting whether the directed graph contains a cycle.

Approach (Kahn's topological sort)
- Build adjacency list and indegree array.
- Start from all nodes with indegree 0, repeatedly remove them and decrement neighbors' indegree.
- If we can visit all nodes (topological order length == numCourses) there is no cycle and all courses can be finished.

Complexity
- Time: O(V + E) where V = numCourses and E = number of prerequisite pairs.
- Space: O(V + E) for adjacency list and indegree array.

C++ solution
- See implementation: [207-Course-Schedule-1/course-schedule-1.cpp](207-Course-Schedule-1/course-schedule-1.cpp)

Example
- Input: `numCourses = 2, prerequisites = [[1,0]]` → Output: `true` (0 -> 1)
- Input: `numCourses = 2, prerequisites = [[1,0],[0,1]]` → Output: `false` (cycle)

Notes
- This repository's solution uses Kahn's algorithm (BFS) and is concise and iterative.
