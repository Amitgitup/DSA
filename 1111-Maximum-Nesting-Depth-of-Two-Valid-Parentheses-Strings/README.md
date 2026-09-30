1111

# Maximum Nesting Depth of Two Valid Parentheses Strings

LeetCode: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/

Problem:
A string is a valid parentheses string if it consists of only '(' and ')' and is balanced. For each index i in the string, we need to assign each character to one of two groups, A or B, such that the maximum nesting depth of each group is minimized and the resulting assignment is valid for the whole string.

Example:
- Input: seq = "(()())"
- Output: [0,1,1,1,0]

Approach:
- Traverse the string from left to right.
- Maintain a current depth counter for the nesting level.
- If we encounter '(', increment the depth.
- If the depth is odd, assign the current index to group 0; otherwise assign it to group 1.
- When closing a parenthesis, assign the same group based on the current parity before decrementing the depth.
- This ensures the two groups never exceed the minimum possible nesting depth difference while preserving validity.

Time Complexity: O(n)
Space Complexity: O(n)

Solution file: Maximum-Nesting-Depth-of-Two-Valid-Parentheses-Strings.cpp
