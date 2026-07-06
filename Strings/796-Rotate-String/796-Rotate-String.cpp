#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int i=0;
        while (i<n) {
            // shift
            char temp = s[0];
            for (int i=1; i<n; i++) {
                s[i-1] = s[i];
            }
            s[n-1] = temp;

            if (s == goal) return true;
            else i++;
        } 
        return false;

        // Method-2
        if (s.size() != goal.size()) return false;

        return (s + s).find(goal) != string::npos;

    }
};