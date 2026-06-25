#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int ind= -1;
        string s = "";

        for(int i=n-1; i>=0; i--) {
            if (num[i] % 2 != 0) {
                ind = i;
                break;
            }
        }

        if (ind != -1) {
            for(int i=0; i<=ind; i++) {
                s.push_back(num[i]);
            }
        }
        return s;

    }
};