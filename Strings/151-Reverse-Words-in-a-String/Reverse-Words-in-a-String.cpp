#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> str;
        string temp = "";

        for(int i=0; i<n; i++) {    
            if (s[i] != ' ') temp += s[i];
            else {
                if (!temp.empty()) {
                    str.push_back(temp);
                    temp = "";
                }
            }
        }
        str.push_back(temp);  

        string ans = "";
        int m = str.size();
        for(int i=m-1; i>=0; i--) {
            if (str[i] == "") continue;
            if (i == 0) {
                ans += str[i];
                break;
            }
            else {
                ans += str[i];
                ans += ' ';
            }
        }
        return ans;

    }
};