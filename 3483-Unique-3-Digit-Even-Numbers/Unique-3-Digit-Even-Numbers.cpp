#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int cnt = 0;
        unordered_set<int> st;
        for (int i=0; i<digits.size(); i++) {
            for (int j=0; j<digits.size(); j++) {
                for (int k=0; k<digits.size(); k++) {
                    int num = 0;
                    if (digits[i] != 0 && j != i && k != i && k != j) {
                        num += digits[i] * 100 + digits[j] * 10 + digits[k] * 1;
                        if (st.find(num) == st.end() && num % 2 == 0) cnt++;
                        st.insert(num); 
                    }
                }
            }
        }
        return cnt; 
    }
};