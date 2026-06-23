#include <bits/stdc++.h>
using namespace std;


    class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size()/2;
        int N = nums.size();

        vector<vector<long long>> left(n+1), right(n+1);

        // Generate all subset sums for left half
        for (int mask=0; mask< (1<<n); mask++) {
            long long sum = 0;
            int cnt = 0;

            for (int i=0; i<n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i];
                    cnt++;
                }
            }
            left[cnt].push_back(sum);
        }

        // Generate all subset sum for right half
        for (int mask=0; mask<(1 << n); mask++) {
            long long sum = 0;
            int cnt=0;

            for (int i=0; i<n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i + n];
                    cnt++;
                }
            }
            right[cnt].push_back(sum);
        }

        long long totalSum = 0;
        for (auto x: nums) totalSum += x;

        for (int i=0; i<=n; i++) {
            sort(right[i].begin(), right[i].end());
        }

        long long ans = LLONG_MAX;

        // Choose i elements from left
        // Choose n-i elements from right
        for (int i=0; i<=n; i++) {

            for (auto leftSum: left[i]) {
                
                int rem = n-i;

                long long target = totalSum / 2 - leftSum;

                auto it = lower_bound(
                    right[rem].begin(), 
                    right[rem].end(),
                    target
                );

                // Candidate 1
                if (it != right[rem].end()) {
                    long long s1 = leftSum + *it;
                    long long s2 = totalSum - s1;

                    ans = min(ans, abs(s1 - s2));
                }

                // Candidate 2
                if (it != right[rem].begin()) {
                    --it;

                    long long s1 = leftSum + *it;
                    long long s2 = totalSum -s1;

                    ans = min(ans, abs(s1 - s2));
                }
            }
        }

        return (int)ans;

    }
};