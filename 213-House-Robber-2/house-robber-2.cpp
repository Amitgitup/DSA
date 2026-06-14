#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int func(vector<int>& nums) {
        int n = nums.size();
        int prev1 = nums[0];
        int prev2 = 0;

        for (int i=1; i<n; i++) {
            int take = nums[i]; if (i > 1) take += prev2;
            int nontake = 0 + prev1;

            int curi = max(take, nontake);
            prev2 = prev1;
            prev1 = curi; 
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0]; 

        vector<int> temp1, temp2;
        for (int i = 0; i<n; i++) {
            if (i != 0) temp1.push_back(nums[i]);
            if (i != n-1) temp2.push_back(nums[i]);
        }

        int ans1 = func(temp1);
        int ans2 = func(temp2);
        return max(ans1, ans2);
    }
};