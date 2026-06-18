class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum_found = 0;
        int expected_sum = 0;

        for (int i = 0; i < n; i++) {
            sum_found += nums[i];
        }

        for (int i = 0; i <= n; i++) {
            expected_sum += i;
        }

        return expected_sum - sum_found;
    }
};