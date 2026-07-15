# LeetCode 146 - LRU Cache

Link: https://leetcode.com/problems/lru-cache/

## Problem Summary
Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations in O(1) time:
- `get(key)` - return the value of the key if the key exists, otherwise return -1.
- `put(key, value)` - insert or update the value of the key. If the cache reaches its capacity, it should invalidate the least recently used item before inserting the new item.

## Key Idea
- Use a hash map for O(1) access to cache entries.
- Use a doubly linked list to track usage order, with most recently used items at the front and least recently used at the back.
- On `get`, move the accessed node to the front.
- On `put`, if key exists update its value and move it to the front; if the capacity is full, remove the tail node and insert the new item at the front.

## Approach
1. Maintain a doubly linked list with dummy head and tail nodes.
2. Maintain an unordered map from key to node pointer.
3. For `get(key)`:
   - If key is not in map, return -1.
   - Otherwise, move the node to the front and return its value.
4. For `put(key, value)`:
   - If key exists, update node value and move it to the front.
   - Otherwise, if cache is full, remove the least recently used node from the list and map.
   - Insert the new node at the front and add it to the map.

## Complexity
- Time: O(1) for both `get` and `put` operations.
- Space: O(capacity) for the cache storage.

## Notes
- Dummy head and tail simplify insertion and removal from the linked list.
- The linked list stores both key and value so the removed entry can be erased from the map efficiently.

## Solution File
See `LRU-Cache.cpp` for the implementation.
