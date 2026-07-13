#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int val = -1;
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                val = nums1[i];
                break;
            }
            else if (nums1[i] < nums2[j]){
                i++;
            }
            else {
                j++;
            }
        }
        return val;
    }
};