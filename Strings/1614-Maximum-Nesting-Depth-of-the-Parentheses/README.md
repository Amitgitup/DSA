# LC 1614 - Maximum Nesting Depth of the Parentheses

**Problem Link:** [LeetCode 1614](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/)

## Problem Description

A string is a **valid parentheses string** (denoted as a **VPS**) if:
1. It is an empty string "", or
2. If A is a VPS, then "(A)" is a VPS, or
3. If A and B are VPS's, then "AB" is a VPS.

We are given a string `s` which is a VPS and contains **digits** in addition to parentheses.

The **nesting depth** of a VPS is defined as follows:
- The nesting depth of `""` is 0
- The nesting depth of `"(" + A + ")"` is 1 + (nesting depth of A)
- The nesting depth of `A + B` is max(nesting depth of A, nesting depth of B)

For example, `""`, `"()(()())"`, and `"()(())"` are VPS's with nesting depths of 0, 2, and 2, respectively.

**Task:** Return the **maximum nesting depth** of any parenthesis substring of `s`.

## Examples

### Example 1:
**Input:** `s = "(1+(2*3)+((8)/4))+1"`
**Output:** `3`
**Explanation:** Digits are ignored. The string "(1+(2*3)+((8)/4))+1" becomes "(+(+)+())". The maximum nesting depth is 3.

### Example 2:
**Input:** `s = "(1)+((2))+(((3)))"` 
**Output:** `3`

### Example 3:
**Input:** `s = "((34)3(45)34)"` 
**Output:** `2`

## Solution Approach

**Algorithm:** Counter-based tracking

1. Iterate through the string character by character
2. Ignore all non-parenthesis characters
3. When encountering `(`:
   - Increment the current depth counter
   - Update the maximum depth if needed
4. When encountering `)`:
   - Decrement the current depth counter
5. Return the maximum depth found

**Why it works:**
- Each `(` increases nesting depth by 1
- Each `)` decreases nesting depth by 1
- We track the maximum depth reached at any point

## Complexity Analysis

- **Time Complexity:** O(n), where n is the length of the string. We traverse the string once.
- **Space Complexity:** O(1), only using constant extra space for counters.

## Code

```cpp
class Solution {
public:
    int maxDepth(string s) {
        int maxCnt = 0;
        int cnt = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cnt += 1;
                maxCnt = max(cnt, maxCnt);
            }
            else if (s[i] == ')') {
                cnt -= 1;
            }
            // Ignore digits and other characters
        }
        return maxCnt;
    }
};
```

## Key Points

- Ignore all non-parenthesis characters (digits, operators, etc.)
- Track the current nesting depth with a counter
- Maintain the maximum depth seen
- The answer is the maximum depth reached at any point during traversal
