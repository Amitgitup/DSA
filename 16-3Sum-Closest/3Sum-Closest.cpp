#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int ClosestSum = 1e9;
        for (int i=0; i<=n-3; i++) {
            int left = i+1;
            int right = n-1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) return sum;
                if (abs(sum-target) < abs(ClosestSum-target))
                    ClosestSum = sum;
                if (sum < target) left++;
                else right--;
            }
        }
        return ClosestSum;
    }
};