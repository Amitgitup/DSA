#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n = nums.size();
        sort (nums.begin(), nums.end());

        long long firstMax = nums[n-1];
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;

        for (int i=n-1; i>=0; i--) {
            if (nums[i] < firstMax) {
                secondMax = max<long long>(secondMax, nums[i]);
                if (secondMax != INT_MIN && nums[i] < secondMax) {
                    thirdMax = max<long long>(thirdMax, nums[i]);
                }
            }
        }

        if(thirdMax == LLONG_MIN) return firstMax;
        else return (int)thirdMax;

    }
};