#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        // Time => O(n log n)     Space => O(k) ≈ O(n)
        map<int, int> mpp;  // (num,count)

        for(int i=0; i<nums.size(); i++) {
            if (nums[i] % 2 == 0) mpp[nums[i]] ++;
        }

        int num =-1; 
        int cnt = 0;
        for (auto it: mpp) {
            int mppNum = it.first;
            int mppCnt = it.second;
            if (mppCnt > cnt) {
                cnt = mppCnt;
                num = mppNum;
            }
        }
        return num;

    }
};