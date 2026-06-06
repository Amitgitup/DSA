# LeetCode 210 — Course Schedule II

Problem: Return a possible ordering of courses given prerequisite pairs. If no valid order exists (cycle), return an empty list.

Link: https://leetcode.com/problems/course-schedule-ii/

Idea
- Same graph model as Course Schedule (207). We need an actual topological ordering instead of a boolean.

Approach (Kahn's topological sort)
- Build adjacency list and indegree array.
- Use a queue seeded with nodes of indegree 0 and pop them to form the topological order, decrementing neighbors' indegree and enqueueing when they reach 0.
- If the resulting order contains all courses, return it; otherwise return an empty vector.

Complexity
- Time: O(V + E).
- Space: O(V + E).

C++ solution
- See implementation: [210-Course-Schedule-2/course-schedule-2.cpp](210-Course-Schedule-2/course-schedule-2.cpp)

Example
- Input: `numCourses = 4, prerequisites = [[1,0],[2,0],[3,1],[3,2]]` → Output: `[0,1,2,3]` or `[0,2,1,3]`

Notes
- The repository uses Kahn's algorithm to produce a valid order when possible.
