 # [41. First Missing Positive - LeetCode](https://leetcode.com/problems/first-missing-positive/)

**Description:**
- Given an unsorted integer array `nums`, return the smallest missing positive integer.

**Solution (this folder):**
- C++ implementation: [First-Missing-Positive.cpp](41-First-Missing-Positive/First-Missing-Positive.cpp#L1)

**Approach:**
- Use the array itself as a hash by placing each positive integer x at index x-1 when possible. After rearrangement, the first index i where nums[i] != i+1 gives the answer i+1.

**Time Complexity:**
- O(n) — each element is moved at most once.

**Space Complexity:**
- O(1) extra space (in-place).

**Compile & Run (example):**
```
g++ -std=c++17 41-First-Missing-Positive/First-Missing-Positive.cpp -O2 -o first_missing
./first_missing
```

Want sample input/output added to the README or commented examples inside `First-Missing-Positive.cpp`? 

