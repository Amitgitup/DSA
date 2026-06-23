#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Don't really need this
    // int f(int ind, int sum, vector<int>& nums, vector<int>& dp) {
    //     if (ind == 0) {
    //         if (sum == 0 && nums[0] ==0) return 2;
    //         if (sum == 0 || sum = nums[0]) return 1;
    //         else return 1;
    //     }
    //     if (dp[ind][sum] != -1) return dp[ind][sum];

    //     int notTake = f(ind-1, sum, nums, dp);
    //     int take = 0;
    //     if (nums[ind] <= sum) {
    //         take = f(ind-1, sum - nums[ind], nums, dp);
    //     }
    //     return dp[ind][sum] = take + notTake;  
    // }

    int countWays(vector<int>& nums, int tar) {
        int n = nums.size();
        vector<int> prev(tar+1, 0), cur(tar+1, 0);
        if (nums[0] == 0) prev[0] = 2;
        else prev[0] = 1;

        if (nums[0]!= 0 && nums[0] <= tar) prev[nums[0]] = 1;

        for (int ind=1; ind<n; ind++) {
            for (int sum=0; sum<=tar; sum++) {
                int notTake = prev[sum];
                int take = 0;
                if (nums[ind] <= sum) take = prev[sum - nums[ind]];
                
                cur[sum] = take + notTake; 
            }
            prev = cur;
        }
        return prev[tar];
    }

    int countPartitions(int n, int d, vector<int>& nums) {
        int totalSum = 0;
        for (auto &it: nums) totalSum += it;
        if ((totalSum - d) < 0 || (totalSum - d) %2) return false;
        int tar = (totalSum - d) /2 ;
        return countWays(nums, tar);
    }


    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return countPartitions(n, target, nums);
    }

};