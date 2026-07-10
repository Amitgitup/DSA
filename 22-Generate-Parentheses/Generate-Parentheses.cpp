#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void func(int cnt1, int cnt2, int n, string& ans, vector<string>& result) {
        
        if (cnt1==n && cnt2==n) {
            result.push_back(ans);
            return;
        }

        if (cnt1 < n) {
            ans.push_back('(');
            func(cnt1+1, cnt2, n, ans, result);
            ans.pop_back();
        }

        if (cnt2 < cnt1) {
            ans.push_back(')');
            func(cnt1, cnt2+1, n, ans, result);
            ans.pop_back();
        } 
    }
    
    vector<string> generateParenthesis(int n) {
        string ans = "";
        vector<string> result;
        (func(0, 0, n, ans, result));
        return result;
    }
};