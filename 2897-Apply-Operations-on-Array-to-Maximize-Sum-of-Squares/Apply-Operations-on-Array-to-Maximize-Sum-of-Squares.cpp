#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        vector<int> cnt(31, 0);

        // 1. Count set bits at each position
        for (int num: nums) {
            for (int i=0; i<31; i++) {
                if ((num >> i) & 1) {
                    cnt[i]++;
                }
            }
        }

        long long ans = 0;
        // 2. Greedily construct the k numbers
        for (int j=0; j < k; j++) {
            long long x = 0;

            for (int i=0; i<31; i++) {
                if (cnt[i] > 0) {
                    x |= (1LL << i);
                    cnt[i]--; 
                }
            }

            // 3. Add the square modulo MOD
            ans = (ans + x * x) % MOD;
        }

        return (int)ans;

    }
};