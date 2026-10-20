class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefMax(n + 1, 0);
        vector<int> suffMin(n + 1, INT_MAX);
        vector<int> prefDrop(n, 0);

        // Prefix maximum
        for (int i = 0; i < n; i++) {
            prefMax[i + 1] = max(prefMax[i], nums[i]);
        }

        // Suffix minimum
        for (int i = n - 1; i >= 0; i--) {
            suffMin[i] = min(nums[i], suffMin[i + 1]);
        }

        // Count adjacent descents
        for (int i = 1; i < n; i++) {
            prefDrop[i] = prefDrop[i - 1]
                        + (nums[i - 1] > nums[i]);
        }

        // Check whether block size k is sortable
        auto check = [&](int k) {
            for (int start = 0; start < n; start += k) {
                int end = start + k - 1;

                // Descents inside the block
                int drops = prefDrop[end] - prefDrop[start];

                // Circular boundary: last element -> first
                if (nums[end] > nums[start]) {
                    drops++;
                }

                // Block must be circularly sortable
                if (drops > 1) return false;

                // Previous elements must not exceed future elements
                if (prefMax[start] > suffMin[start]) {
                    return false;
                }
            }

            return true;
        };

        int ans = 0;

        // Enumerate divisors of n
        for (int d = 1; d <= n / d; d++) {
            if (n % d == 0) {
                if (check(d)) ans += d;

                int other = n / d;
                if (other != d && check(other)) {
                    ans += other;
                }
            }
        }

        return ans;
    }

};