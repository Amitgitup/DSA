# [347. Top K Frequent Elements - LeetCode](https://leetcode.com/problems/top-k-frequent-elements/)

**Description:**
- Given an integer array `nums` and an integer `k`, return the `k` most frequent elements.

**Solution (this folder):**
- C++ implementation: [Top-K-Frequent-Elements.cpp](347-Top-K-Frequent-Elements/Top-K-Frequent-Elements.cpp#L1)

**Approach:**
- Use a frequency map to count occurrences, then use a min-heap (priority queue) of size `k` or bucket sort to collect the top `k` frequent elements.

**Time Complexity:**
- Using hashmap + heap: O(n log k) where n = nums.length.
- Using bucket sort: O(n).

**Space Complexity:**
- O(n) for the hashmap and additional O(k) for the heap (or O(n) for buckets).

**Compile & Run (example):**
```
g++ -std=c++17 347-Top-K-Frequent-Elements/Top-K-Frequent-Elements.cpp -O2 -o topk
./topk
```

If you want, I can also add sample inputs/outputs, link to other language solutions, or update the C++ file with comments.
