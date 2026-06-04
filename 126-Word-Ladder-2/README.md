# LeetCode 126 - Word Ladder II

## Problem
Given two words, `beginWord` and `endWord`, and a dictionary `wordList`, return all shortest transformation sequences from `beginWord` to `endWord`, such that:

- Only one letter can be changed at a time.
- Each transformed word must exist in the word list.
- The transformation sequence should be as short as possible.

If there is no such sequence, return an empty list.

### Example
Input:
```
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log","cog"]
```
Output:
```
[
  ["hit","hot","dot","dog","cog"],
  ["hit","hot","lot","log","cog"]
]
```

## Solution Approach

This solution finds all shortest paths using a two-phase strategy:

1. **Breadth-First Search (BFS)**
   - Perform BFS from `beginWord` to discover the minimum number of steps needed to reach each reachable word.
   - Store the level (distance) of each word in a map.
   - Stop BFS early when the `endWord` is reached.

2. **Depth-First Search (DFS) Backtracking**
   - Starting from `endWord`, recursively build transformation sequences backwards toward `beginWord`.
   - At each step, only move to words whose BFS level is exactly one less than the current word.
   - Reverse each completed path when adding it to the final results.

## Key details

- Uses an `unordered_set` for fast dictionary lookups.
- Uses `unordered_map<string, int>` to store the shortest BFS distance for each visited word.
- Generates neighboring words by changing one character at each position.

## Time and Space Complexity

- Time Complexity: `O(N * L^2)` in the worst case, where `N` is the number of words and `L` is the length of each word.
- Space Complexity: `O(N * L)` for the BFS queue, word map, and recursion stack.

## File

- `word-ladder-2.cpp` — C++ implementation of the solution.

## Notes

- This implementation assumes `beginWord` may or may not be in `wordList`.
- The BFS step uses a visited set to ensure each word is queued once, preserving the shortest-path guarantee.
