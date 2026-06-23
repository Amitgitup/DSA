
[LeetCode — Partition Array Into Two Arrays to Minimize Sum Difference (2035)](https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference/)

**Problem:**
- **Description:** Given an integer array `nums` of length `2n`, partition it into two arrays each of length `n` such that the absolute difference of the sums of the two arrays is minimized. Return the minimum possible absolute difference.

**Constraints:**
- `nums.length == 2 * n`, `1 <= n <= 15` (so `nums.length <= 30`), elements are integers; total sum fits in 32-bit signed range.

**Approach (Meet-in-the-Middle):**
- Split `nums` into two halves of length `n` each. For each half, enumerate all subsets and group subset sums by subset size (0..n).
- For each possible size `k` chosen from the left half, try to pick `n-k` elements from the right half so the combined sum is as close as possible to `total/2`. Use sorting + binary search on the right-half lists.
- This reduces the 2^(2n) search to roughly 2 * 2^n work and is efficient for n <= 15.

**Complexity:**
- **Time:** O(n * 2^n + 2^n log 2^n) ≈ O(n * 2^n).
- **Space:** O(2^n) for storing subset sums per half.

**Example:**
- Input: `nums = [3,9,7,3]` (n = 2) → Output: `2` (partition `[9,3]` and `[7,3]` gives |12 - 10| = 2)

**Solution:**
- C++ implementation: [2035-Partition-Array-Into-Two-Arrays-to-Minimize-Sum-Difference-DP/partition-array-into-two-arrays-to-minimize-sum-difference.cpp](2035-Partition-Array-Into-Two-Arrays-to-Minimize-Sum-Difference-DP/partition-array-into-two-arrays-to-minimize-sum-difference.cpp#L1)

If you want, I can add a brief explanation of the meet-in-the-middle code, test cases, or a small runner to verify inputs.
