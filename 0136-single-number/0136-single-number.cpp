class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();
        //using xor
        int r=0;
        for(int i=0;i<len;i++){
            r=r^nums[i];
        }
        return(r);
    }
};