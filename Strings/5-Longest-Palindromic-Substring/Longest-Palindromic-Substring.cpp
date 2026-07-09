#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Memoisation
    bool f(int i, int j, string& s, vector<vector<int>>& dp) {
        if (i >= j) return true;
        if (dp[i][j] != -1) return dp[i][j];

        if (s[i] != s[j]) return dp[i][j] = false;

        return dp[i][j] = f(i+1, j-1, s, dp);
    }   
    
    // string longestPalindrome(string s) {
    //     int n = s.size();
    //     vector<vector<int>> dp(n, vector<int>(n, -1));
    //     int start = 0;
    //     int maxLen = 1;

    //     for (int i=0; i<n; i++) {
    //         for (int j=i; j<n; j++) {

    //             if (f(i, j, s, dp)) {
    //                 if (j-i+1 > maxLen) {
    //                     maxLen = j-i+1;
    //                     start=i;
    //                 }
    //             }
    //         }
    //     }
    //     return s.substr(start, maxLen);
    // }

    // Tabulation
    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int start = 0;
        int maxLen = 1;

        // Base Case 
        for (int i=0; i<n; i++) {
            dp[i][i] = true;
        }

        // Fill DP table
        for (int i=n-1; i>=0; i--) {
            for (int j = i+1; j<n; j++) {

                if (s[i] == s[j]) {
                    
                    if (j - i <= 2) {
                        dp[i][j] = true;
                    }
                    else 
                        dp[i][j] = dp[i+1][j-1];
                }
                else {
                    dp[i][j] = false;
                }

                if (dp[i][j] && j-i+1 > maxLen) {
                    maxLen = j-i+1;
                    start = i;
                }
            }
        }

        return s.substr(start, maxLen);
    }

};