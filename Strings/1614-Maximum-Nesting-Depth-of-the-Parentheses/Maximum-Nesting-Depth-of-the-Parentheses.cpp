#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxDepth(string s) {
        int maxCnt=0;
        int cnt =0;

        for(int i=0; i<s.size(); i++) {
            if (s[i] == '(') {
                cnt += 1;
                maxCnt = max(cnt, maxCnt);
            }
            else if (s[i] == ')') {
                cnt -= 1;
            }
            else continue;
        }
        return maxCnt;

    }
};