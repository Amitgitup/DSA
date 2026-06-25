# LeetCode 1903. Largest Odd Number in String

[LeetCode 1903 - Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/)

Problem: Given a string representing a positive integer, return the largest-valued odd number that is a substring of the original string and ends at the last digit of the substring. If no odd number can be formed, return an empty string.

Approach:
- Scan the input string from right to left.
- Find the last digit that is odd.
- Return the substring from the start of the string up to and including that odd digit.
- If no odd digit exists, return an empty string.

Time Complexity: O(n), where n is the length of the input string.
Space Complexity: O(n) for the returned substring in the worst case.

Reference implementation file: `largest-odd-number-in-string.cpp`
