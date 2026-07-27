class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = 0;
        int min_length = INT_MAX;
        int sum = 0;
        while (high < n) {
            sum += nums[high];
            int length = high - low + 1;
            if (sum == target) {
                if (length < min_length) {
                    min_length = length;
                }
            }
            while (sum >= target) {
                int length = high - low + 1;
                if (length < min_length) {
                    min_length = length;
                }
                sum -= nums[low];
                low += 1;
            }
            high += 1;
        }
        if (min_length == INT_MAX) {
            return (0);
        }
        return (min_length);
    }
};