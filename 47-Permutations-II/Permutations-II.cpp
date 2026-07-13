#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    void func(vector<int>& nums, vector<int>& pnc, vector<bool>& vis, vector<vector<int>>& ans) {
        int n = nums.size();

        if (pnc.size() == nums.size()) {
            ans.push_back(pnc);
            return;
        }
        for (int i=0; i<n; i++) {
            if (i>0 && nums[i] == nums[i-1] && !vis[i-1]) continue;
            if (vis[i] == false) {
                pnc.push_back(nums[i]);
                vis[i] = true;
                func(nums, pnc, vis, ans);
                pnc.pop_back();
                vis[i] = false;
            }
        }
        return; 
        
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<int> pnc;
        vector<bool> vis(n, false);
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        func(nums, pnc, vis, ans);
        return ans;
    }
};