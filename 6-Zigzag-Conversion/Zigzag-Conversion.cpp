#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string convert(string s, int numRows) {
        int m = s.size();
        int dim = 0;
        if (m%2 == 0) dim = m/2;
        else dim = (m+1)/2;

        vector<vector<int>> arr(numRows, vector<int>(dim, 0));

        // 1. Filling up the 2-D vector with the string
        int i = 0;
        int k = 0;

        if (numRows == 1) return s;

        while (i < dim) {
            for (int j=0; j<numRows; j++) {
                if (j != numRows-1 && k != m) {
                    arr[j][i] = s[k];
                    k++;
                }
            }

            for (int j=numRows-1; j>=0; j--) {
                if (j != 0 && k != m) {
                    arr[j][i] = s[k];
                    k++;
                    if (j != 0) i++;
                }
            }
            if (k == m) break;
        }
        
        // 2. Inserting the chars in the answer string
        string ans = "";
        for (int i=0; i<numRows; i++) {
            for (int j=0; j<dim; j++) {
                if (arr[i][j] != 0) {
                    ans += arr[i][j];
                }
            }
        }
        return ans;
    }

    string convert(string s, int numRows) {

        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);

        int curRow = 0;
        bool goingDown = true;

        for (char ch: s) {

            rows[curRow] += ch;

            if (curRow == 0)
                goingDown = true;
            else if (curRow == numRows - 1)
                goingDown = false;

            if (goingDown)
                curRow++;
            else 
                curRow--; 
        }

        string ans;

        for (string &row: rows) 
            ans += row;

        return ans;

    }

};