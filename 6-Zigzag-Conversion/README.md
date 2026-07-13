6

# Zigzag Conversion

LeetCode: https://leetcode.com/problems/zigzag-conversion/

## Problem

Write the characters of a string in a zigzag pattern on a given number of rows, then read the pattern line by line.

### Example

Input: s = "PAYPALISHIRING", numRows = 3

Output: "PAHNAPLSIIGYIR"

Pattern:

P   A   H   N
A P L S I I G
Y   I   R

## Approach

- If `numRows == 1`, return the original string.
- Use either:
  - Simulation: maintain `numRows` strings and a direction flag to append characters row-by-row, switching direction at the top/bottom; or
  - Index math: compute cycle length `cycle = 2 * numRows - 2` and collect characters for each row using step offsets.

## Complexity

- Time: O(n) where `n` is `s.length()` (each character visited a constant number of times).
- Space: O(n) for the output buffer.

## Files

- Solution: [6-Zigzag-Conversion/Zigzag-Conversion.cpp](6-Zigzag-Conversion/Zigzag-Conversion.cpp)

## Notes

This README gives a concise description, example, common approaches, and complexity. Compile or run the `.cpp` file to verify behavior on sample inputs.