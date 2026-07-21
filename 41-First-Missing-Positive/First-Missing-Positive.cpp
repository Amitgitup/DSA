#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // int n = nums.size();
        // vector<int> freq(n+2, 0);

        // for (int i=0; i<nums.size(); i++) {
        //     if (nums[i] >= 0 && nums[i] <= n+1) {
        //         freq[nums[i]]++;
        //     }
        // }

        // for (int i=1; i<freq.size(); i++) {
        //     if (freq[i] == 0) return i;
        // }
        
        // return -1;
    
        sort(nums.begin(), nums.end());

        int num = 1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == num) {
                num++;
            }
            else continue;
        }
        return num;
    
    }
};