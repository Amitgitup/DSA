836

# Rectangle Overlap

LeetCode: https://leetcode.com/problems/rectangle-overlap/

Problem:
An axis-aligned rectangle is represented by its bottom-left corner and top-right corner as [x1, y1, x2, y2]. Given two rectangles, determine whether they overlap with each other.

Two rectangles overlap if the intersection of their areas is positive, and the rectangles are considered to have no overlap if they only touch at a boundary.

Example:
- Input: rec1 = [0,0,2,2], rec2 = [1,1,3,3]
- Output: true

Approach:
- Compare the x-intervals of the rectangles.
- Compare the y-intervals of the rectangles.
- There is overlap only if:
  - max(x1, x3) < min(x2, x4)
  - max(y1, y3) < min(y2, y4)
- This checks for a strictly positive area of intersection.

Time Complexity: O(1)
Space Complexity: O(1)

Solution file: Rectangle-Overlap.cpp
