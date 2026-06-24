645

# Set Mismatch

- LeetCode: https://leetcode.com/problems/set-mismatch/

Problem summary
- Given an array of integers `nums` representing a set of numbers where one number in the range [1, n] is duplicated and one number is missing, return the duplicate and missing numbers.

Key idea
- Count occurrences or use mathematical relationships to identify the repeated and missing values.
- Common techniques: frequency array, XOR, or sum/difference formulas.

Example
- Input: [1, 2, 2, 4]
- Output: [2, 3]

Approach
- Use a boolean visited array or frequency counter for numbers 1..n.
- The first number seen twice is the duplicate.
- The number not seen at all is the missing number.

Complexity
- Time: O(n)
- Space: O(n) or O(1) depending on approach.

Solution (C++)
- See: [645-Set-Mismatch/set-mismatch.cpp](645-Set-Mismatch/set-mismatch.cpp)
