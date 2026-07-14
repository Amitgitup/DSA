#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
            
        stack<int> st;

        for ( int i=0; i<operations.size(); i++) {

            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+") st.push(stoi(operations[i]));

            if(operations[i] == "C") st.pop();

            if(operations[i] == "D") {
                int val = st.top();
                st.push(2 * val);
            }

            if (operations[i] == "+") {
                int val1 = st.top(); st.pop();
                int val2 = st.top(); st.pop();
                st.push(val2);
                st.push(val1);
                st.push(val1 + val2);
            } 
        }

        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;

    }
};