class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;

        for (int n : nums) {
            if (n == 0) return 0;   // product becomes zero
            if (n < 0) sign = -sign; // flip sign for negative number
        }

        return sign;
    }
};
