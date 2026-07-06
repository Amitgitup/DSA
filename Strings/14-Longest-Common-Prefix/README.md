14

# Longest Common Prefix

- **LeetCode:** [Problem 14 - Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

## Problem
Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string.

## Approach (concise)
- Vertical scanning: compare characters column-wise across all strings until a mismatch or end of any string.
- Alternative: horizontal scanning (compare prefixes pairwise) or use a Trie for many queries.

## Complexity
- Time: O(N * M) where N = number of strings, M = length of shortest string.
- Space: O(1) extra (excluding input and output).

## Example
Input: ["flower","flow","flight"]
Output: "fl"

## Implementation
- See `Longest-Common-Prefix.cpp` in this folder: [Strings/14-Longest-Common-Prefix/Longest-Common-Prefix.cpp](Strings/14-Longest-Common-Prefix/Longest-Common-Prefix.cpp)

## Build & Run (Linux/macOS)
```bash
g++ -std=c++17 Longest-Common-Prefix.cpp -O2 -o lcp
./lcp
```

## Build & Run (Windows PowerShell)
```powershell
g++ -std=c++17 Longest-Common-Prefix.cpp -O2 -o lcp.exe
.\lcp.exe
```

## Tags
strings, two-pointers, divide-and-conquer, trie
