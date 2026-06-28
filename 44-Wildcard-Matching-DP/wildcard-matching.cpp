#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Memoisation
    bool f(int i, int j, string& s1, string& s2, vector<vector<int>>& dp) {
        if (i < 0 && j < 0) return true;
        if (i < 0 && j >=0) return false;
        if (j < 0 && i>=0) {
            for(int ii=0; ii<=i; ii++) {
                if (s1[ii] != '*') return false;
            }
            return true;
        }
        if (dp[i][j] != -1) return dp[i][j];

        if (s1[i] == s2[j] || s1[i] == '?') return dp[i][j] = f(i-1, j-1, s1, s2, dp);
        if (s1[i] == '*') {
            return dp[i][j] = f(i, j-1, s1, s2, dp) | f(i-1, j, s1, s2, dp);
        }
        return dp[i][j] = false;
    }

    // bool isMatch(string s, string p) {
    //     int m = s.size();
    //     int n = p.size();
    //     vector<vector<int>> dp(n, vector<int>(m, -1)); 
    //     // p is the first string & s is second string
    //     return f(n-1, m-1, p, s, dp);
    // }

    // Tabulation
    // bool isMatch(string s, string p) {
    //     int m = s.size();
    //     int n = p.size();
    //     vector<vector<bool>> dp(n+1, vector<bool>(m+1, false)); 
        
    //     dp[0][0] = true;
    //     for (int j=1; j<=m; j++) dp[0][j] = false;
        
    //     for (int i=1; i<=n; i++) {
    //         int flag = true;
    //         for (int ii=1; ii<=i; ii++) {
    //             if (p[ii-1] != '*') {
    //                 flag = false;
    //                 break;
    //             }
    //         }
    //         dp[i][0] = flag;
    //     }

    //     for (int i=1; i<=n; i++) {
    //         for (int j=1; j<=m; j++) {
    //             if (p[i-1] == s[j-1] || p[i-1] == '?') {
    //                 dp[i][j] = dp[i-1][j-1];
    //             }
    //             else if (p[i-1] == '*') {
    //                 dp[i][j] = dp[i][j-1] | dp[i-1][j];
    //             }
    //             else dp[i][j] = false;
    //         }
    //     }
        
    //     return dp[n][m];  
    // }
    
    // Space Optimization
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<bool> prev(m+1, false), cur(m+1, false); 
        
        prev[0] = true;
        for (int j=1; j<=m; j++) prev[j] = false;
        

        for (int i=1; i<=n; i++) {
            bool flag = true;
            for (int ii=1; ii<=i; ii++) {
                if (p[ii-1] != '*') {
                    flag = false;
                    break;
                }
            }
            cur[0] = flag;

            for (int j=1; j<=m; j++) {
                if (p[i-1] == s[j-1] || p[i-1] == '?') {
                    cur[j] = prev[j-1];
                }
                else if (p[i-1] == '*') {
                    cur[j] = cur[j-1] | prev[j];
                }
                else cur[j] = false;
            }
            prev = cur;
        }
        
        return prev[m];  
    }

};