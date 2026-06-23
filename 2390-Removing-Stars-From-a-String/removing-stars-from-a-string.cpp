#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char> st;

        for (int i=0; i<n; i++) {
            if (s[i] != '*') {
                st.push(s[i]);
            }
            else {
                if(!st.empty()) {
                    st.pop();
                }
                else continue;
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;


    // Better Solution 
    string ans;

    for (char ch: s) {
        if (ch != '*') {
            ans.push_back(ch);
        }
        else 
            ans.pop_back();
    }
    return ans;

    }
};