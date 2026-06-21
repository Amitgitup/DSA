#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Recursion
    bool f(int ind, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0) return true;
        if (ind == 0) return (nums[ind] == target);
        if (dp[ind][target] != -1) return dp[ind][target];

        bool notTake = f(ind-1, target, nums, dp);
        bool take = false;
        if (nums[ind] <= target) {
            take = f(ind-1, target-nums[ind], nums, dp);
        }
        return dp[ind][target] = (take | notTake);
    }

    // bool canPartition(vector<int>& nums) {
    //     int n = nums.size();
    //     int totalSum = 0;
    //     for (int i=0; i<n; i++) {
    //         totalSum += nums[i];
    //     }
    //     if (totalSum %2 !=0) return false;

    //     int target = totalSum/2;

    //     // if this returns true -? ans = true else false;
    //     return f(n-1, target, nums);
    // }

    // Memoisation
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for (int i=0; i<n; i++) {
            totalSum += nums[i];
        }
        if (totalSum %2 != 0) return false;

        int target = totalSum/2;

        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        return f(n-1, target, nums, dp);
    }
    
    // Tabulation
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for (int i=0; i<n; i++) {
            totalSum += nums[i];
        }
        if (totalSum %2 != 0) return false;

        int k = totalSum/2;

        vector<vector<bool>> dp(n, vector<bool>(k+1, 0));
        for (int i=0; i<n; i++) dp[i][0] = true;
        if (nums[0] <= k) dp[0][nums[0]] = true;

        for (int ind=1; ind<n; ind++) {
            for (int target = 1; target<=k; target++) {
                bool notTake = dp[ind-1][target];
                bool take = false;
                if (nums[ind] <= target) {
                    take = dp[ind-1][target-nums[ind]];
                }
                dp[ind][target] = take | notTake; 
            }
        }
        return dp[n-1][k];
    }

    // Space Optimization
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for (int i=0; i<n; i++) {
            totalSum += nums[i];
        }
        if (totalSum %2 != 0) return false;

        int k = totalSum/2;

        vector<bool> prev(k+1, 0), cur(k+1, 0);
        cur[0] = prev[0] = true;
        if (nums[0] <= k) prev[nums[0]] = true;

        for (int ind=1; ind<n; ind++) {
            for (int target = 1; target<=k; target++) {
                bool notTake = prev[target];
                bool take = false;
                if (nums[ind] <= target) {
                    take = prev[target-nums[ind]];
                }
                cur[target] = take | notTake; 
            }
            prev = cur;
        }
        return prev[k];
    }

};