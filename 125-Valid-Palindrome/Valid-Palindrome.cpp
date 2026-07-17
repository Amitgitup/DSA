#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (int i=0; i<s.size(); i++) {
            if (!isalnum(s[i])) continue;

            if (isupper(s[i])) {
                ans += (char)tolower(s[i]);
            }
            else {
                ans += (char)s[i];
            }
        }

        int left = 0;
        int right = ans.size() - 1;

        while (left < right) {
            if (ans[left] == ans[right]) {
                left++;
                right--;
            }
            else return false;
        }

        return true;
    }
};
