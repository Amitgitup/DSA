151

# Reverse Words in a String

- **LeetCode:** [Problem 151 - Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)

## Problem
Given an input string `s`, reverse the order of the words. A word is defined as a sequence of non-space characters. The output should have words separated by a single space with no leading or trailing spaces.

## Approach (concise)
- Split on spaces and filter out empty tokens, then join tokens in reverse order.
- In-place approach: trim spaces, reverse the whole string, then reverse each word.

## Complexity
- Time: O(n)
- Space: O(n) (or O(1) extra for in-place manipulations)

## Example
Input: `"  the sky  is blue  "` → Output: `"blue is sky the"`

## Implementation
- See `Reverse-Words-in-a-String.cpp` in this folder: [Strings/151-Reverse-Words-in-a-String/Reverse-Words-in-a-String.cpp](Strings/151-Reverse-Words-in-a-String/Reverse-Words-in-a-String.cpp)

## Build & Run (Windows PowerShell)
```powershell
g++ -std=c++17 Reverse-Words-in-a-String.cpp -O2 -o revwords.exe
.\revwords.exe
```

## Tags
strings, two-pointers, in-place
