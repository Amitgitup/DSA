# LeetCode 8. String to Integer (atoi)

[LeetCode 8 - String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)

Problem: Implement the `atoi` function which converts a string to a 32-bit signed integer (similar to C/C++ `atoi`). The function should:

- Ignore leading whitespace.
- Optional '+' or '-' sign.
- Read digits until a non-digit is encountered.
- Clamp the value to the 32-bit signed integer range [-2^31, 2^31 - 1] on overflow.

Approach (concise):

- Skip leading spaces, detect sign, then iterate characters collecting digits.
- Build the result incrementally and check for overflow before adding the next digit (compare with `INT_MAX/10` and digit bounds).
- Return `INT_MAX` or `INT_MIN` if overflow occurs.

Time Complexity: O(n)  — single pass over the string.
Space Complexity: O(1).

Reference implementation file: `string-to-integer-(atoi).cpp`

Compile & run (example using g++):

```bash
g++ -std=c++17 string-to-integer-(atoi).cpp -o atoi
./atoi
```

If you want, I can also add example inputs, more explanation, or test cases to the README.

