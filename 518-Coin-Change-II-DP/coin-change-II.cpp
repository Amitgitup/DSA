#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Memoisation
    int f(int ind, int target, vector<int>& coins, vector<vector<int>>& dp) {
        if (ind == 0) {
            if (target % coins[ind] == 0) return 1;
            else return 0;
        }
        if (dp[ind][target] != -1) return dp[ind][target];

        int notTake = f(ind-1, target, coins, dp);
        int take = 0;
        if (coins[ind] <= target) {
            take = f(ind, target-coins[ind], coins, dp);
        }

        return dp[ind][target] = (take + notTake); 
    }

    // int change(int amount, vector<int>& coins) {
    //     int n = coins.size();
    //     vector<vector<int>> dp(n, vector<int>(amount+1, -1));
    //     return f(n-1, amount, coins, dp);
    // }

    // Tabulation
    // int change(int amount, vector<int>& coins) {
    //     int n = coins.size();
    //     vector<vector<int>> dp (n, vector<int>(amount+1, 0));
        
    //     for (int T=0; T<=amount; T++) {
    //         if (T % coins[0] == 0) dp[0][T] = 1;
    //         else dp[0][T] = 0;
    //     } 

    //     for (int ind=1; ind<n; ind++) {
    //         for (int target=0; target<=amount; target++) {
    //             long long notTake = dp[ind-1][target];
    //             long long take = 0;
    //             if (coins[ind] <= target) take = dp[ind][target - coins[ind]];
    //             dp[ind][target] = (take + notTake);
    //         }
    //     }
    //     return dp[n-1][amount];
    // }

    // Space Optimization
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<int> prev(amount+1, 0), cur(amount+1, 0);
        
        for (int T=0; T<=amount; T++) {
            if (T % coins[0] == 0) prev[T] = 1;
            else prev[T] = 0;
        } 

        for (int ind=1; ind<n; ind++) {
            for (int target=0; target<=amount; target++) {
                long long notTake = prev[target];
                long long take = 0;
                if (coins[ind] <= target) take = cur[target - coins[ind]];
                cur[target] = (take + notTake);
            }
            prev = cur;
        }
        return prev[amount];
    }
    

};