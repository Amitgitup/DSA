# LC 13 - Roman to Integer

**Problem Link:** [LeetCode 13](https://leetcode.com/problems/roman-to-integer/)

## Problem Description

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

**Special Rules:** Roman numerals are usually written largest to smallest from left to right. However, there is a special case when a smaller value appears before a larger value:
- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900

**Task:** Given a roman numeral, convert it to an integer.

## Examples

### Example 1:
**Input:** `s = "III"`
**Output:** `3`
**Explanation:** III = 3

### Example 2:
**Input:** `s = "LVIII"`
**Output:** `58`
**Explanation:** L = 50, V = 5, III = 3

### Example 3:
**Input:** `s = "MCMXCIV"`
**Output:** `1994`
**Explanation:** M = 1000, CM = 900, XC = 90 and IV = 4

## Solution Approach

**Algorithm:** Left-to-right scan with comparison

1. Create a map of Roman symbols to their integer values
2. Initialize result to 0
3. Iterate through the Roman numeral string from left to right
4. For each character:
   - If the current symbol's value is less than the next symbol's value, **subtract** the current value (handles subtraction cases like IV, IX, XL, XC, CD, CM)
   - Otherwise, **add** the current value to the result
5. Return the result

**Why it works:**
- When we see a smaller value before a larger value (like I before V), we know it's a subtraction case
- We handle this by checking if current < next, and if so, we subtract instead of add
- All other cases are straightforward addition

## Complexity Analysis

- **Time Complexity:** O(n), where n is the length of the Roman numeral string. We traverse it once.
- **Space Complexity:** O(1), we use a fixed-size map (constant space) and a few variables.

## Code

```cpp
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // If current value is less than next value, subtract
            // (handles IV, IX, XL, XC, CD, CM cases)
            if (i + 1 < n && romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];
            } else {
                result += romanMap[s[i]];
            }
        }
        
        return result;
    }
};
```

## Key Points

- **Subtraction Rule:** A smaller numeral before a larger numeral means subtraction
- **Valid Subtractive Cases:** Only I, X, C can be placed before a larger numeral
  - I can only be before V and X
  - X can only be before L and C
  - C can only be before D and M
- The input is guaranteed to be within the range 1 to 3999
- Check current value against the next value to identify subtraction cases
- Use a hash map for O(1) lookups of symbol values
