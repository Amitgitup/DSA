1189

# Maximum Number of Balloons

- LeetCode: https://leetcode.com/problems/maximum-number-of-balloons/

Problem summary
- Given a string `text`, return the maximum number of instances of the word "balloon" you can form using the letters in `text`. Each letter in `text` can be used at most once.

Key idea
- Count occurrences of characters needed for "balloon": `b`, `a`, `l`, `o`, `n`. Letters `l` and `o` appear twice in the word, so available counts for them must be divided by 2.

Example
- Input: "loonbalxballpoon"
- Output: 2

Approach
- Single pass to count characters (O(n) time, O(1) space).
- Compute counts: min(count[b], count[a], count[l] // 2, count[o] // 2, count[n]).

Complexity
- Time: O(n) where `n` is `text.length()`.
- Space: O(1) (fixed-size counter for letters).

Solution (C++)
- See: [1189-Maximum-Number-of-Balloons/maximum-number-of-balloons.cpp](1189-Maximum-Number-of-Balloons/maximum-number-of-balloons.cpp)

Notes
- This README begins with the problem number `1189` as requested.
