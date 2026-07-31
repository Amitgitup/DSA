#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26, 0);

        for(int i=0; i<word.size(); i++) {
            cnt[word[i] - 'a']++;
        }
        
        sort(cnt.begin(), cnt.end(), greater<int>());

        int push = 0;
        for(int i=0; i<cnt.size(); i++) {
            if (i<8) {
                push += 1*cnt[i];
            }
            else if (i>=8 && i<16) {
                push += 2*cnt[i];
            }
            else if (i>=16 && i<24) {
                push += 3*cnt[i];
            }
            else {
                push += 4*cnt[i];
            }
        }
        return push;
    }
};