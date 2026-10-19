class Solution {
public:
    int f(int ind, int prev_ind, vector<int>& nums, int n, vector<vector<int>> &dp) {
        if (ind == n) return 0;
        if (dp[ind][prev_ind + 1] != -1) return dp[ind][prev_ind + 1];

        // not take
        int len = 0 + f(ind + 1, prev_ind, nums, n, dp);
        
        // take
        if (prev_ind == -1 || nums[ind] > nums[prev_ind]) {
            len = max(len, 1 + f(ind + 1, ind, nums, n, dp));
        }
        return dp[ind][prev_ind + 1] = len;
    }

    // int lengthOfLIS(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<vector<int>> dp(n, vector<int>(n+1, -1));
    //     return f(0, -1, nums, n, dp);
    // }

    // Tabulation
    // int lengthOfLIS(vector<int>& nums) {
    //     int n = nums.size();  
    //     vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    //     for (int ind=n-1; ind >=0; ind--) {
    //         for (int prev_ind = ind-1; prev_ind>= -1; prev_ind--) {
    //             int len = 0 + dp[ind+1][prev_ind+1];
    //             if (prev_ind == -1 || nums[ind] > nums[prev_ind]) {
    //                 len = max(len, 1 + dp[ind+1][ind+1]);
    //             }
    //             dp[ind][prev_ind + 1] = len;
    //         }
    //     }
    //     return dp[0][-1+1];
    // }

    // Space Optimisation
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();  
        vector<int> cur(n+1, 0), next(n+1, 0);

        for (int ind=n-1; ind >=0; ind--) {
            for (int prev_ind = ind-1; prev_ind >= -1; prev_ind--) {
                int len = 0 + next[prev_ind+1];
                if (prev_ind == -1 || nums[ind] > nums[prev_ind]) {
                    len = max(len, 1 + next[ind+1]);
                }
                cur[prev_ind + 1] = len;
            }
            next = cur;
        }
        return next[-1+1];
    }

};