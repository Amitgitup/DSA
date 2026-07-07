#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mpp;

        for (int i=0; i<s.size(); i++) {
            mpp[s[i]] ++;
        }
        vector<pair<char, int>> vec;
        for (auto it: mpp) {
            vec.push_back(it);
        }

        // Sorting using Custom Operator
        sort(vec.begin(), vec.end(),
            [](auto&a, auto&b) {
                return a.second > b.second;
            });

        string ans = ""; 
        for(auto &it: vec) {
            ans.append(it.second, it.first);
        }
        return ans;

    }
};