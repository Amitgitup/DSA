#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        string ans = "";

        int cnt = 1;
        for(int i=0; i<first.length(); i++) {
            char ch = first[i];
            for(int j=1; j<strs.size(); j++) {
                if (i>= strs[j].length() || ch != strs[j][i]) {
                    cnt = 0;
                    break;
                }
                else continue;
            }
            if (cnt == 1) ans+= ch;
        }
        return ans;


    }
};