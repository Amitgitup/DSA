# LeetCode 682. Baseball Game

https://leetcode.com/problems/baseball-game/

## Problem

You are given a list of strings `operations` representing a baseball game scoring record. Process the record with the following rules:

- An integer string means record a new score.
- "+" means record a score equal to the sum of the previous two scores.
- "D" means record a score equal to double the previous score.
- "C" means invalidate the previous score, removing it from the record.

Return the sum of all scores after processing all operations.

## Solution

- Use a stack to keep valid scores.
- For each operation:
  - Push integer values.
  - For "C", pop the last score.
  - For "D", push double the last score.
  - For "+", push the sum of the previous two scores.
- Sum the remaining stack values at the end.

## Complexity

- Time: `O(n)` where `n` is the number of operations.
- Space: `O(n)` for the stack.

## Implementation

- `Baseball-Game.cpp`

## Notes

- The stack maintains only valid scores after each operation.
- The implementation handles each special command in a single pass.
