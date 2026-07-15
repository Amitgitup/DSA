#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // Method 1
        int OddSum = 0, EvenSum = 0;
        for (int i=1; i<=2*n; i++) {
            if (i % 2 ==0 ) EvenSum += i;
            else OddSum += i;
        }

        int gcd = INT_MIN;
        for (int i=1; i<=min(OddSum, EvenSum); i++) {
            if (OddSum % i == 0 && EvenSum % i == 0) gcd = max(gcd, i);
        }
        return gcd;

        // Method 2
        // return n
    }
};