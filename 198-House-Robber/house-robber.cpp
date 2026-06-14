#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int HR(int ind, vector<int>& nums) {
        if (ind == 0) return nums[0];
        if (ind < 0) return 0;

        int pick = nums[ind] + HR(ind-2, nums);
        int notPick = 0 + HR(ind-1, nums);

        return max(pick, notPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        return HR(n-1, nums);

    }
};


// Memoization
    int HR(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind == 0) return nums[ind];
        if (ind < 0) return 0;

        if (dp[ind] != -1) return dp[ind];

        int pick = nums[ind] + HR(ind-2, nums, dp);
        int notPick = 0 + HR(ind-1, nums, dp);

        return dp[ind] = max(pick, notPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return HR(n-1, nums, dp);
    }


// Tabulation
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        
        dp[0] = nums[0];
        int neg = 0;
        for (int i=1; i<n; i++) {
            int take = nums[i]; if (i>1) take += dp[i-2];
            int nontake = 0 + dp[i-1];

            dp[i] = max(take, nontake);
        }
        return dp[n-1];
    }


// Space Optimisation
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev1 = nums[0];
        int prev2 = 0;

        for (int i=1; i<n; i++) {
            int take = nums[i] + prev2;
            int nontake = 0 + prev1;

            int curi = max(take, nontake);
            prev2 = prev1;
            prev1 = curi; 
        }
        return prev1;
    }