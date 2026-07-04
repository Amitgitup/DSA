#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;

        for (char ch:expression) {
            if (ch == ',' || ch == '(') continue;

            if (ch != ')') st.push(ch);

            else {
                bool hasTrue = false;
                bool hasFalse = false;

                while (st.top() == 't' || st.top() == 'f') {
                    
                    if (st.top() == 't') hasTrue = true;
                    if (st.top() == 'f') hasFalse = true;

                    st.pop();
                }

                char op = st.top();
                st.pop();

                if (op == '!') {
                    if(hasTrue) 
                        st.push('f');
                    else 
                        st.push('t');
                }
                else if (op == '&') {
                    if(hasFalse)
                        st.push('f');
                    else 
                        st.push('t');
                }
                else { // '|'
                    if(hasTrue) 
                        st.push('t');
                    else
                        st.push('f');
                }
            }
        }
        return st.top() == 't';
    }
};