
312

# Burst Balloons

[LeetCode - Burst Balloons](https://leetcode.com/problems/burst-balloons/)

Problem: Given n balloons, each with a number, bursting a balloon i gives coins equal to nums[left] * nums[i] * nums[right], where left and right are the adjacent remaining balloons. Find the maximum coins by bursting the balloons in optimal order.

Approaches

- Recursion (Brute-force): Try all possible orders of bursting balloons.
	- Time complexity: Exponential — roughly O(n!) (explores all permutations of burst order).

- Memoization (Top-down interval DP): Add virtual balloons with value 1 at both ends. Let dp[l][r] be max coins obtainable by bursting all balloons between l and r (exclusive). For each k in (l, r) try bursting k last and combine results.
	- Time complexity: O(n^3) — there are O(n^2) intervals and O(n) choices per interval.

- Tabulation (Bottom-up interval DP): Fill dp for increasing interval lengths using the same recurrence as memoization.
	- Time complexity: O(n^3) — same reasoning as memoization.

Space Complexity (summary)

- Recursion: O(n) recursion stack (plus negligible overhead).
- Memoization: O(n^2) for DP table plus O(n) recursion stack.
- Tabulation: O(n^2) for DP table.

Reference

- Problem link: https://leetcode.com/problems/burst-balloons/
