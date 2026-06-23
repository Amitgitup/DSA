#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Memoisation
    int f(int ind, int target, vector<int>& coins, vector<vector<int>>& dp) {
        if (ind==0) {
            if (target % coins[ind] ==0) return target/coins[ind];
            else return 1e9;
        }
        if (dp[ind][target] !=-1) return dp[ind][target];

        int notTake = 0 + f(ind-1, target, coins, dp);
        int take = 1e9;
        if (coins[ind] <= target) {
            take = 1 + f(ind, target-coins[ind], coins, dp);
        }
        return dp[ind][target] = min(notTake, take);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int ans = f(n-1, amount, coins, dp);
        return (ans >= 1e9) ? -1: ans;
    }

    // Tabulation
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        for (int T=0; T<=amount; T++) {
            if (T % coins[0] ==0) dp[0][T] = T/coins[0];
            else dp[0][T] = 1e9;
        }

        for (int ind=1; ind<n; ind++) {
            for (int T=0; T<=amount; T++) {
                int notTake = 0 + dp[ind-1][T];
                int take = INT_MAX;
                if (coins[ind] <= T) {
                    take = 1 + dp[ind][T-coins[ind]];
                }
                dp[ind][T] = min(take, notTake);
            }
        }
        int ans = dp[n-1][amount];
        return (ans >= 1e9) ? -1 : ans;
    }

    // Space Optimization
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> prev(amount+1, 0), cur(amount+1, 0);
        for (int T=0; T<=amount; T++) {
            if (T % coins[0] ==0) prev[T] = T/coins[0];
            else prev[T] = 1e9;
        }

        for (int ind=1; ind<n; ind++) {
            for (int T=0; T<=amount; T++) {
                int notTake = 0 + prev[T];
                int take = INT_MAX;
                if (coins[ind] <= T) {
                    take = 1 + cur[T-coins[ind]];
                }
                cur[T] = min(take, notTake);
            }
            prev = cur;
        }
        
        int ans = prev[amount];
        return (ans >= 1e9) ? -1 : ans;
    }


};