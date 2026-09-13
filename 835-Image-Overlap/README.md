835

# Image Overlap

LeetCode: https://leetcode.com/problems/image-overlap/

Problem:
You are given two images represented as n x n binary matrices, where 1 means a filled cell and 0 means an empty cell. You can shift one image relative to the other in any direction. Return the maximum number of overlapping 1s after shifting.

Example:
- Input: img1 = [[1,1,0],[0,1,0],[0,1,0]], img2 = [[0,0,0],[0,1,1],[0,0,1]]
- Output: 3

Approach:
- Collect all coordinates of the 1s in both matrices.
- For each pair of 1s, compute the relative offset between the two images.
- Count the frequency of each offset using a hash map.
- The maximum frequency across all offsets gives the answer.

Time Complexity: O(n^4) in the straightforward implementation because there are O(n^2) candidate cells and O(n^2) possible relative shifts.
Space Complexity: O(n^2)

Solution file: Image-Overlap.cpp
