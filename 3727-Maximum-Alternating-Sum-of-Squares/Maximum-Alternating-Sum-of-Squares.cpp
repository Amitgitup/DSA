#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        // Rarrange the numbers on the basis of absolute values 
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        
        int n = nums.size();
        long long add = 0;
        long long sub = 0;
        for (int i=0; i < nums.size(); i++) {
            long long square = 1LL * nums[i] * nums[i];

            if (i < n/2) 
                sub += square;
            else 
                add += square;
        }

        return add - sub;

    }
};