#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
    
        stack<int> st;

        for (int i=0; i<s.size(); i++) {
            if (st.empty()) st.push(s[i]);
            else {
                char ch =  st.top();
                if (s[i] == ch) {
                    st.pop();
                }
                else st.push(s[i]);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;

    }
};