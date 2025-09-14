class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0, ds = 0;
        for (int x : nums) {
            es += x;
            while (x) {
                ds += x % 10;
                x /= 10;
            }
        }
        return abs(es - ds);
    }
};
