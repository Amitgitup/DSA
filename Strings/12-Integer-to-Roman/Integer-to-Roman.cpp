#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        while (num != 0) {
            
            if (num >= 1000) {
                int cnt = num / 1000;
                ans.append(cnt, 'M');
                num -= cnt * 1000;
            }
            if (num >= 900) {
                int cnt = num / 900;
                ans += "CM";
                num -= cnt * 900;
            }
            if (num >= 500) {
                int cnt = num / 500;
                ans.append(cnt, 'D');
                num -= cnt * 500;
            }
            if (num >= 400) {
                int cnt = num / 400;
                ans += "CD";
                num -= cnt * 400;
            }        
            if (num >= 100) {
                int cnt = num / 100;
                ans.append(cnt, 'C');
                num -= cnt * 100;
            }
            if (num >= 90) {
                int cnt = num / 90;
                ans += "XC";
                num -= cnt * 90;
            }
            if (num >= 50) {
                int cnt = num / 50;
                ans.append(cnt, 'L');
                num -= cnt * 50;
            }
            if (num >= 40) {
                int cnt = num / 40;
                ans += "XL";
                num -= cnt * 40;
            }
            if (num >= 10) {
                int cnt = num / 10;
                ans.append(cnt, 'X');
                num -= cnt * 10;
            }
            if (num >= 9) {
                int cnt = num / 9;
                ans += "IX";
                num -= cnt * 9;
            }
            if (num >= 5) {
                int cnt = num / 5;
                ans.append(cnt, 'V');
                num -= cnt * 5;
            }
            if (num >= 4) {
                int cnt = num / 4;
                ans += "IV";
                num -= cnt * 4;
            }
            if (num >= 1) {
                int cnt = num / 1;
                ans.append(cnt, 'I');
                num -= cnt * 1;
            }
        }
        return ans;
    }
};