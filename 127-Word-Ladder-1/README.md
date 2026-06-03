# LeetCode 127 - Word Ladder

- Difficulty: Hard
- Topic: Graph traversal, Breadth-first search (BFS), String transformation
- File: `word-ladder.cpp`

## Problem
Given two words, `beginWord` and `endWord`, and a dictionary `wordList`, return the number of words in the shortest transformation sequence from `beginWord` to `endWord`, or `0` if no such sequence exists.

A valid transformation sequence must satisfy:
- Every adjacent pair of words differs by exactly one letter.
- Every intermediate word must be in `wordList`.
- `beginWord` does not need to be in `wordList`.
- The last word in the sequence must be `endWord`.

## Approach
1. Build a graph implicitly by considering each word as a node.
2. Use BFS starting from `beginWord` to explore all one-letter transformations.
3. For each word, generate possible neighbors by changing one letter at a time.
4. Stop when `endWord` is reached and return the distance (level) from `beginWord`.
5. If `endWord` is unreachable, return `0`.

## Complexity
- Time: `O(m * n * 26)`, where `m` is `wordList.length` and `n` is the length of each word. Each word can generate `26 * n` candidate transformations.
- Space: `O(m * n)` for storing words, visited states, and BFS queue.

## Notes
- Use a visited set to avoid revisiting words and to prevent cycles.
- If `endWord` is not in `wordList`, the result is immediately `0`.
- The BFS level count includes `beginWord` and `endWord`.

## Examples
Example 1:
```
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
```
Explanation: One shortest transformation sequence is `hit -> hot -> dot -> dog -> cog`.

Example 2:
```
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]
Output: 0
```
Explanation: `cog` is not in `wordList`, so no valid sequence exists.
