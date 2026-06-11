# 70. Climbing Stairs

LeetCode: https://leetcode.com/problems/climbing-stairs/

Problem
-------
You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Constraints: 1 <= n <= 45

Examples
--------
- Input: n = 2
  Output: 2

- Input: n = 3
  Output: 3

Approach
--------
- Dynamic Programming / Fibonacci relation: ways[i] = ways[i-1] + ways[i-2].
- Base cases: ways[0] = 1 (one way to stay), ways[1] = 1.
- You can implement with O(n) time and O(1) space by keeping two rolling variables.

Complexity
----------
- Time: O(n)
- Space: O(1) (or O(n) if storing the full DP array)

C++ Reference
-------------
See the implementation in the repository: [climbing-stairs.cpp](70-Climbing-Stairs/climbing-stairs.cpp#L1)

Compile & Run
-------------
On Linux/macOS:
```
g++ -std=c++17 climbing-stairs.cpp -O2 -o climbing-stairs
./climbing-stairs
```
On Windows (PowerShell):
```
g++ -std=c++17 climbing-stairs.cpp -O2 -o climbing-stairs.exe
.\climbing-stairs.exe
```

Notes
-----
- Problem link is at the top for quick access.
- If you want, I can also add multiple solution variants (recursive + memoization, DP array, constant space) to this README.
