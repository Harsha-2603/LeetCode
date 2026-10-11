class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int max_length = 0;
        int count_zeros = 0;
        while (right < n) {
            if (left <= right && nums[right] == 0) {
                count_zeros++;
            }
            while (count_zeros > k) {
                if (nums[left] == 0) {
                    count_zeros--;
                }
                left++;
            }
            int length = right - left + 1;
            max_length = max(max_length, length);
            right++;
        }
        return (max_length);
    }
};