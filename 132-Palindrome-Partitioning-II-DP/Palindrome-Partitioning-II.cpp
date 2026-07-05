#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool isPalindrome(int i, int j, string s) {

        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    // Memoisation
    int f(int i, string s, vector<int>& dp) {
        int n = s.size();
        if (i==n) return 0;
        if (dp[i] != -1) return dp[i];

        int minCost = INT_MAX;
        for(int j=i; j<n; j++) {
            if (isPalindrome(i, j, s)) {
                int cost = 1 + f(j+1, s, dp);
                minCost = min(minCost, cost);
            }
        }
        return dp[i] = minCost;

    }
    // int minCut(string s) {
    //     int n = s.size(); 
    //     vector<int> dp(n, -1);
    //     return f(0, s, dp) -1;
    // }

    // Tabulation
    int minCut(string& s) {
        int n = s.size();

        vector<vector<bool>> pal(n, vector<bool>(n, false));            
        for (int i=n-1; i>=0; i--) {
            for (int j=i; j<n; j++) {
                if (s[i] == s[j]) {
                    if (j - i <= 2)
                        pal[i][j] = true;
                    else 
                        pal[i][j] = pal[i+1][j-1]; 
                }
            }
        }

        vector<int> dp(n+1, 0);
        dp[n] = 0;        

        for(int i=n-1; i>=0; i--) {
            int minCost = INT_MAX;
            for(int j=i; j<n; j++) {
                if (pal[i][j]) {
                    int cost = 1 + dp[j+1];
                    minCost = min(minCost, cost);
                }
            }
            dp[i] = minCost;
        }
        return dp[0] - 1;
    }
};