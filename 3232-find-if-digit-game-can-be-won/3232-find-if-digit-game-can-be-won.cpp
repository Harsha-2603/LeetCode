class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int length=nums.size();
        int single_sum=0;
        int double_sum=0;
        for(int i=0;i<length;i++){
            if(nums[i]/10==0)
                single_sum=single_sum+nums[i];
            else
                double_sum=double_sum+nums[i];   
        }
        if(single_sum==double_sum)
            return(0);
        else   
            return(1);
    }
};