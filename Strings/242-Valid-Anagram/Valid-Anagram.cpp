#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        // if (s.size() != t.size()) return false;

        // int n = s.size();
        // vector<int> hash1(26, 0);
        // vector<int> hash2(26, 0);

        // for(int i=0; i<n; i++) {
        //     hash1[s[i] - 'a'] += 1;
        //     hash2[t[i] - 'a'] += 1;
        // }

        // int i=0, j=0;
        // while (i<hash1.size() && j<hash2.size()) {
        //     if (hash1[i] != hash2[j]) return false;
        //     else {
        //         i++;
        //         j++;
        //     }
        // }
        // return true;

        // Method-2
        if(s.size() != t.size()) return false;

        vector<int> freq(26, 0);

        for (int i=0; i<s.size(); i++) {
            freq[s[i] - 'a'] ++;
            freq[t[i] - 'a'] --;
        }

        for (int i=0; i<freq.size(); i++) {
            if (freq[i] != 0) return false;
        }
        
        return true;


    }
};