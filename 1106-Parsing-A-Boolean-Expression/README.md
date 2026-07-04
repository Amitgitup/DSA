
1106

# Parsing A Boolean Expression

[LeetCode - Parsing A Boolean Expression](https://leetcode.com/problems/parsing-a-boolean-expression/)

Problem: Given a valid boolean expression string containing the symbols `t` (true), `f` (false), operators `!` (NOT), `&` (AND), `|` (OR), and parentheses, evaluate and return the resulting boolean value.

Approaches

- Recursive parsing (DFS): Parse the expression using an index pointer; evaluate sub-expressions recursively based on operator semantics.
	- Time complexity: O(n) — each character is processed a constant number of times.
	- Space complexity: O(n) recursion stack in the worst case (nested parentheses).

- Stack-based iterative parsing: Use operator and operand stacks to evaluate without recursion.
	- Time complexity: O(n).
	- Space complexity: O(n) for stacks.

Notes

- The input size `n` is the length of the expression string.
- Memoization is typically unnecessary since the expression is evaluated in a single parse and sub-expressions are not reused.

Reference

- Problem link: https://leetcode.com/problems/parsing-a-boolean-expression/
