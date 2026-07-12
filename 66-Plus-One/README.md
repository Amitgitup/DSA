# LeetCode 66. Plus One

LeetCode problem: [66. Plus One](https://leetcode.com/problems/plus-one/)

**Problem**
- Given a non-empty array of decimal digits representing a non-negative integer, add one to the integer. Each element in the array contains a single digit. The most significant digit is at the head of the list.

**Approach**
- Iterate from the last digit to the first, add carry (initially 1), update the digit and compute new carry. If carry remains after processing all digits, insert `1` at the front.

**Complexity**
- Time: O(n)
- Space: O(1) additional (or O(n) if creating a new array for the result)

**Example**
- Input: [1,2,3]
- Output: [1,2,4]

**Solution (C++)**
- See `Plus-One.cpp` in this folder for an implementation.
