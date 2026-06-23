
# 494

[LeetCode — Target Sum](https://leetcode.com/problems/target-sum/)

## Problem
Given an integer array `nums` and an integer `S`, you are asked to find the number of ways to assign `+` and `-` signs to each element in `nums` so that the resulting sum equals `S`.

## Approaches

- Subset-sum transformation (recommended): transform the problem to finding the number of subsets with sum = (sum(nums) + S) / 2 when (sum(nums) + S) is even and >= 0. Use dynamic programming (0/1 knapsack style) to count subsets.
- Recursive DFS with memoization: try +/− for each element and memoize states `(index, remaining)`.
- DP on sums: maintain a map/array of counts of reachable sums after processing each number.

## Complexity

- Time: O(n * P) where P is the target subset sum (for the DP subset-count approach), or O(n * range) for DP-on-sums.
- Space: O(P) for optimized DP or O(n*P) for full 2D DP; recursion + memo uses O(n * range) for memo table.

## Example

- Input: `nums = [1,1,1,1,1]`, `S = 3`
- Output: `5`

## Reference implementation

See the implementation in the repository: [494-Target-Sum-DP/target-sum.cpp](494-Target-Sum-DP/target-sum.cpp)

---
If you want, I can add a short explanation of the DP transformation with code comments, or include a small test harness to run examples locally.
