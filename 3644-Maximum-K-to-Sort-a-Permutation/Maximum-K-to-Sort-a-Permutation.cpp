#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        vector<int> s;

        for (int i=0; i<n; i++) {
            s.push_back(nums[i]);
        }

        sort(s.begin(), s.end());

        int i=0, j=0;

        int k = INT_MAX;
        int sort_count = 0;     // helps to check finally if the nums was sorted or not
        while (i < nums.size() && j < s.size()) {
            if (nums[i] != s[j]) {
                k = k & nums[i];
            }
            else {
                sort_count++;
            }
            i++; j++;
        }
        
        return (sort_count == n ? 0 : k);

    }
};