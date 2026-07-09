#include <bits/stdc++.h>
using namespace std;



class Solution {
public:

    // Method-1 (T.C => O(n^3))
    // int beauty(int i, int j, string& s) {
    //     map<char, int> mpp;

    //     for (int num=i; num<=j; num++) {
    //         mpp[s[num]]++;
    //     }

    //     int maxi = INT_MIN;
    //     int mini = INT_MAX;
    //     for (auto it: mpp) {
    //         int cnt = it.second;
    //         maxi = max(maxi, cnt);
    //         mini = min(mini, cnt);
    //     }
    //     return (maxi - mini); 
    // }

    // int beautySum(string s) {
    //     int n = s.size();

    //     int cnt = 0;
    //     for (int i=0; i<n; i++) {
    //         for (int j=i; j<n; j++) {
    //             cnt += beauty(i, j, s);
    //         }
    //     }
    //     return cnt;
    // }

    // Method-2 
    int beautySum(string s) {
        int n = s.size();
        int cnt = 0;

        for (int i=0; i<n; i++) {
            vector<int> freq(26);
            for (int j=i; j<n; j++) {
                int maxi = INT_MIN;
                int mini = INT_MAX;
                freq[s[j] - 'a'] ++;

                for (int k=0; k<26; k++) {
                    if (freq[k] > 0) {
                        maxi = max(maxi, freq[k]);
                        mini = min(mini, freq[k]);
                    }
                }
                cnt += maxi - mini;
            }
        }
        return cnt;
    }


};