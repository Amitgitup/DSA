
# 205

# Isomorphic Strings

- **LeetCode:** [Problem 205 - Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)

## Problem
Given two strings `s` and `t`, determine if they are isomorphic. Two strings are isomorphic if the characters in `s` can be replaced to get `t` while preserving order and without two characters mapping to the same character unless they are the same.

## Approach (concise)
- Use two hash maps (or arrays for ASCII): map characters from `s` to `t` and from `t` to `s`. Ensure mappings are consistent for every position.

## Complexity
- Time: O(n) where n = length of the strings.
- Space: O(1) for fixed alphabet (O(min(n, alphabet))) or O(n) in general.

## Example
Input: `s = "egg", t = "add"`  → Output: `true`

## Implementation
- See `205-Isomorphic-Strings.cpp` in this folder: [Strings/205-Isomorphic-Strings/205-Isomorphic-Strings.cpp](Strings/205-Isomorphic-Strings/205-Isomorphic-Strings.cpp)

## Build & Run (Windows PowerShell)
```powershell
g++ -std=c++17 205-Isomorphic-Strings.cpp -O2 -o iso.exe
.\iso.exe
```

## Tags
strings, hash-map, mapping
