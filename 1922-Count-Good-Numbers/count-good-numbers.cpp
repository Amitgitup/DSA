#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // Binary Exponentiation
    long long power(long long base, long long exp, long long mod) {
        long long ans = 1;

        while (exp > 0) {
            if (exp % 2 ==1) {
                ans = (ans * base) % mod;
            }
            // Square the base & half the exp
            base = (base * base) % mod;
            exp = exp/2;
        }

        return ans;
    } 

    int countGoodNumbers(long long n) {
      
        long long mod = 1e9 + 7;
        long long evenPos = (n+1)/2;
        long long oddPos = n/2;

        // (5 ^ evenPos) * (4 ^ oddPos)
        long long evenWays = power(5, evenPos, mod);
        long long oddWays = power(4, oddPos, mod);

        return (evenWays * oddWays) % mod;
    }
};


// Time Complexity = O(log N) + O(log N)
// Sapce Complexity = O(1) 