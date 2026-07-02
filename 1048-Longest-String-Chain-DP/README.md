# LeetCode 1048 - Longest String Chain

Link: https://leetcode.com/problems/longest-string-chain/

## Problem Summary
Given a list of words, determine the length of the longest possible word chain. A word chain is formed by taking a word and repeatedly adding exactly one letter anywhere in the word to form the next word in the chain.

## Key Idea
- Sort words by length.
- Use dynamic programming with a map from word to chain length.
- For each word, generate all possible predecessors by removing one character.
- If a predecessor exists, update the current word's chain length.

## Approach
1. Sort the list of words by length ascending.
2. Initialize a dictionary/map `dp` where `dp[word]` stores the longest chain ending at `word`.
3. For each word:
   - Try removing one character at every position to create a predecessor.
   - If the predecessor exists in `dp`, set `dp[word] = max(dp[word], dp[predecessor] + 1)`.
4. Track the maximum chain length seen.

## Complexity
- Time: O(N * L^2), where N is the number of words and L is the maximum word length.
- Space: O(N * L) for the DP map and string operations.

## Notes
- This problem is a classic DP with preprocessing by word length.
- Using a hash map makes predecessor lookup O(1).
- The result is the maximum value in `dp` after processing all words.

## Solution File
See `Longest-String-Chain.cpp` for the implementation.
