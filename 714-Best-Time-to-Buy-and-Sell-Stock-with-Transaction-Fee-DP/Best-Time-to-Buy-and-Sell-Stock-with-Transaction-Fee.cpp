#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    // Memoisation
    int f(int ind, int buy, vector<int>& prices, int fee, vector<vector<int>>& dp) {
        int n = prices.size();
        if (ind == n) return 0;
        if (dp[ind][buy] != -1) return dp[ind][buy];


        if (buy == 1) {
            dp[ind][buy] = max(-prices[ind] + f(ind+1, 0, prices, fee, dp),
                        0 + f(ind+1, 1, prices, fee, dp) );
        }
        else {
            dp[ind][buy] = max(prices[ind] - fee + f(ind+1, 1, prices, fee, dp),
                        0 + f(ind+1, 0, prices, fee, dp) );
        }

        return dp[ind][buy];
    }

    // int maxProfit(vector<int>& prices, int fee) {
    //     int n = prices.size();
    //     vector<vector<int>> dp(n, vector<int>(2, -1));
    //     return f(0, 1, prices, fee, dp);
    // }

    // Tabulation
    // int maxProfit(vector<int>& prices, int fee) {
    //     int n = prices.size();
    //     vector<vector<int>> dp(n+1, vector<int>(2, 0));
        
    //     for (int ind=n-1; ind>=0; ind--) {
    //         for (int buy=0; buy<=1; buy++) {
    //             if (buy) {
    //                 dp[ind][buy] = max(-prices[ind] + dp[ind+1][0],
    //                                 0 + dp[ind+1][1]); 
    //             }
    //             else {
    //                 dp[ind][buy] = max(prices[ind] - fee + dp[ind+1][1],
    //                                 0 + dp[ind+1][0]);
    //             }
    //         }
    //     }
    //     return dp[0][1];

    // }    


    // Space Optimization
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<int> ahead(2, 0);
        vector<int> cur(2, 0);
        
        for (int ind=n-1; ind>=0; ind--) {
            for (int buy=0; buy<=1; buy++) {
                if (buy) {
                    cur[buy] = max(-prices[ind] + ahead[0],
                                    0 + ahead[1]); 
                }
                else {
                    cur[buy] = max(prices[ind] - fee + ahead[1],
                                    0 + ahead[0]);
                }
            }
            ahead = cur;
        }
        return cur[1];

    }     

};