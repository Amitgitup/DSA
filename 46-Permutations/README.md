# LeetCode 46. Permutations

LeetCode problem: [46. Permutations](https://leetcode.com/problems/permutations/)

**Problem**
- Given a collection of distinct integers, return all possible permutations.

**Approach**
- Backtracking: generate permutations by swapping or by building a path and marking used elements.

**Complexity**
- Time: O(n * n!) — generating n! permutations and copying each of length n.
- Space: O(n) recursion depth plus output size O(n!).

**Example**
- Input: [1,2,3]
- Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

**Solution (C++)**
- See `Permutations.cpp` in this folder for an implementation.
