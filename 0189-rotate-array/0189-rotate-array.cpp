class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //better solution
        // long int length = nums.size();
        // k = k % length;
        // for (long int i = 0; i < k; i++) {
        //     long int temp = nums[length - 1];
        //     for (long int j = length - 2; j >= 0; j--) {
        //         nums[j + 1] = nums[j];
        //     }
        //     nums[0] = temp;
        // }

        int n = nums.size();
        k = k % n; // in case k > n

        // Step 1: Reverse the whole array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse last n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};