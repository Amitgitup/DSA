796

# Rotate String

- **LeetCode:** [Problem 796 - Rotate String](https://leetcode.com/problems/rotate-string/)

## Problem
Given two strings `s` and `goal`, return `true` if and only if `s` can become `goal` after some number of shifts on `s`. A shift on `s` means moving the first character of `s` to the end.

## Approach (concise)
- Check if `goal` is a substring of `s + s` and lengths are equal. This uses string search (KMP or built-in find).
- Alternatively, test all rotations by slicing `s` and comparing to `goal` (O(n^2) worst-case without KMP).

## Complexity
- Time: O(n) with KMP or using efficient substring search; O(n^2) for naive rotation checks.
- Space: O(n) for the concatenated string `s + s`.

## Example
Input: `s = "abcde", goal = "cdeab"` → Output: `true`

## Implementation
- See `796-Rotate-String.cpp` in this folder: [Strings/796-Rotate-String/796-Rotate-String.cpp](Strings/796-Rotate-String/796-Rotate-String.cpp)

## Build & Run (Windows PowerShell)
```powershell
g++ -std=c++17 796-Rotate-String.cpp -O2 -o rotate.exe
.\rotate.exe
```

## Tags
strings, rotations, substring-search, KMP
