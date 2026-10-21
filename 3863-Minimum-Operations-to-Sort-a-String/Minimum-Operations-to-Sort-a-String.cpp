#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        // Case 1: Already sorted
        if (is_sorted(s.begin(), s.end())) {
            return 0;
        }

        // Case 2: Impossible to sort an unsorted length-2 string
        if (n == 2) {
            return -1;
        }

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        // Case 3: One extreme is already correctly placed
        if (s[0] == mn || s[n - 1] == mx) {
            return 1;
        }

        // Case 4: An extreme is somewhere in the middle
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx) {
                return 2;
            }
        }

        // Case 5: Minimum is at the end and maximum at the start
        return 3;
    }
};
