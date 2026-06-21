# 416. Partition Equal Subset Sum

LeetCode problem: https://leetcode.com/problems/partition-equal-subset-sum/

## Problem
Given a non-empty array `nums` containing only positive integers, determine if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

## Idea / Approach
- Compute the total sum; if it's odd, return `false`.
- Let `target = total / 2`. Reduce to subset-sum: is there a subset with sum equal to `target`?
- Classic DP:
  - 1D boolean DP: `dp[0] = true`. For each number `num` in `nums`, iterate `t` from `target` down to `num`: `dp[t] = dp[t] || dp[t - num]`.
  - Bitset optimization: use a bitset and shift: `bits |= (bits << num)`, then check `bits[target]`.

## Complexity
- Time: O(n * target) where `target = sum / 2`.
- Space: O(target) (1D DP) or O(target / word_size) for bitset optimization.

## Example
Input: `nums = [1,5,11,5]` -> Output: `true` (partition into [11] and [1,5,5])

## Implementation
See implementation in `partition-equal-subset-sum.cpp` in this folder: [partition-equal-subset-sum.cpp](416-Partition-Equal-Subset-Sum-DP/partition-equal-subset-sum.cpp)

## References
- LeetCode 416: https://leetcode.com/problems/partition-equal-subset-sum/
