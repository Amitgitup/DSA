# LeetCode 1922. Count Good Numbers

[LeetCode 1922 - Count Good Numbers](https://leetcode.com/problems/count-good-numbers/)

Problem: Given a positive integer `n`, count the number of length-`n` strings consisting of digits (0-9) such that:

- Digits at even indices (0-based) are even: {0, 2, 4, 6, 8} (5 choices).
- Digits at odd indices are prime digits: {2, 3, 5, 7} (4 choices).

Return the count modulo 10^9 + 7.

Concise approach:

- Let `evenPos = (n + 1) / 2` (number of even indices) and `oddPos = n / 2` (number of odd indices).
- Number of good numbers = (5^evenPos) * (4^oddPos) mod 1e9+7.
- Use fast modular exponentiation (binary exponentiation) to compute powers under the modulus.

Complexity:

- Time: O(log n) for modular exponentiation.
- Space: O(1).

Reference implementation: `count-good-numbers.cpp`

Compile & run (example using g++ — note: file contains `Solution` class; add a small `main()` to run custom tests):

```bash
g++ -std=c++17 count-good-numbers.cpp -o count_good_numbers
./count_good_numbers
```

If you'd like, I can add example test cases and a small `main()` harness to the repository.
