#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;

        for (int i=0; i<nums.size(); i++) {
            mpp[nums[i]]++;
        }

        vector<pair<int, int>> freq;

        for (auto it: mpp) {
            freq.push_back(it);
        }

        sort(freq.begin(), freq.end(),
            [](pair<int, int>& a, pair<int, int>& b) {
                if (a.second == b.second)
                    return a.first < b.first;
                return a.second > b.second;
            });

        vector<int> ans;
        for (int i=0; i<freq.size(); i++) {
            if (k == 0) break;
            ans.push_back(freq[i].first);
            k--;
        }
        return ans;

    }
};