#include <bits/stdc++.h>
using namespace std;




class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        
        int minNo = 1e8;
        int maxNo = -1e8;

        for (int i=0; i<n; i++) {
            maxNo = max(nums[i], maxNo);
            minNo = min(nums[i], minNo);
        }

        int minInd, maxInd;

        for (int i=0; i<n; i++) {
            if (nums[i] == minNo) minInd = i;
            if (nums[i] == maxNo) maxInd = i;
        }

        int left = min(minInd, maxInd);
        int right = max(minInd, maxInd);

        // C-1 both front
        int ans1 = right + 1;

        // C-2 both back
        int ans2 = n - left;

        // C-3 one from left & one from right
        int ans3 = (left + 1) + (n - right);

        int ans = min(ans1, min(ans2, ans3));

        return ans; 

    }
};