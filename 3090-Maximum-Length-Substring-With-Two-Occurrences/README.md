3090

# Maximum Length Substring With Two Occurrences

- LeetCode: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/

## Problem
Find the maximum length of a substring that appears at least twice in the given string.

## Approach (concise)
- Binary-search the length `L` of the substring and check whether any substring of length `L` occurs at least twice.
- Use rolling hash (e.g., Rabin–Karp) with a hash set or unordered_map to detect repeated substrings efficiently. Use double hashing or verify candidate collisions to be safe.
- Alternative: suffix array / suffix automaton for a linear or n log n solution.

## Complexity
- Time: O(n log n) using binary search with rolling-hash checks (where each check is O(n)).
- Space: O(n) for hashes and temporary storage.

## Solution
- C++ solution: [Maximum-Length-Substring-With-Two-Occurrences.cpp](3090-Maximum-Length-Substring-With-Two-Occurrences/Maximum-Length-Substring-With-Two-Occurrences.cpp)

## Notes
- The LeetCode problem page above contains constraints and examples. This README gives a compact summary and common approach; see the linked solution for an implementation.
