#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mpp = {{'b',0}, {'a',0}, {'l',0}, {'o',0}, {'n',0}};

        for(int i=0; i<text.size(); i++) {
            if (text[i]=='b' || text[i]=='a' || text[i]=='l' || text[i]=='o' || text[i]=='n') mpp[text[i]]++;
        }

        int minFreq = INT_MAX;
        for(auto it: mpp) {
            minFreq = min(minFreq, it.second);
        }

        if (mpp['l'] >= (2*minFreq) && mpp['o'] >= (2*minFreq)) {
            return minFreq;
        }
        else return (mpp['l']/2 < mpp['o']/2 ? mpp['l']/2 : mpp['o']/2);

    }
};