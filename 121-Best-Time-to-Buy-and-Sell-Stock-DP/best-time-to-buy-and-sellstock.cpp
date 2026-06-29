#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();      
        int profit = 0;
        int mcp = prices[0];

        for (int i=1; i<n; i++) {
            profit = max(profit, prices[i] - mcp);
            mcp = min(mcp, prices[i]);
        }
        return profit;

    }
};