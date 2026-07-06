#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mpp1;
        map<char, char> mpp2;

        int i=0, j=0;
        int n = s.length();
        while (i<n && j<n) {
            char c1 = s[i];
            char c2 = t[j];

            // if mappings doesn't exist create one
            if (! mpp1.count(c1) && ! mpp2.count(c2)) {
                mpp1[c1] = c2;
                mpp2[c2] = c1;
            }
            else {
                if (mpp1[c1] != c2 || mpp2[c2] != c1) return false;
            }
            i++;
            j++;
        }
        return true;
    }
};