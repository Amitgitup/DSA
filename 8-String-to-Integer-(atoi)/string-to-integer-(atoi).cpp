#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i=0;

        // 1. Skip Leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Determine sign
        int sign = 1;
        if (i < n && s[i] == '+' || s[i] == '-') {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Convert digits
        long long num = 0;

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Check overflow before updating sum
            if (num > INT_MAX / 10 || num == INT_MAX / 10 && digit > 7) {

                if (sign == 1) return INT_MAX;
                else return INT_MIN;
            }
            num = num * 10 + digit;
            i++;
        }

        return (int)(num * sign);
    }
};