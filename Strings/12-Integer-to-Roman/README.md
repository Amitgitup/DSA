# LeetCode 12. Integer to Roman

LeetCode problem: [12. Integer to Roman](https://leetcode.com/problems/integer-to-roman/)

**Problem**
- Convert an integer to its Roman numeral representation (1 <= num <= 3999).

**Approach**
- Greedy mapping: repeatedly subtract the largest Roman value and append its symbol.

**Complexity**
- Time: O(1) (bounded operations since num <= 3999)
- Space: O(1)

**Example**
- Input: 1994
- Output: "MCMXCIV"

**Solution (C++)**
- See `Integer-to-Roman.cpp` in this folder for an implementation.
