#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1, 0);

        for(int i=0; i<n; i++) {
            hash[nums[i]]++;    
        }
        
        vector<int> ans; int val=0;
        for(int i=1; i<=n; i++) {
            if (hash[i] == 2) ans.push_back(i);
            if (hash[i] == 0) val=i;
        }
        ans.push_back(val);
        return ans;
    }
};