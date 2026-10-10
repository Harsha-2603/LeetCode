class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int min_length=INT_MAX;
        while(right<n){
            sum+=nums[right];
            while(left<=right && sum>=target){
                int length=right-left+1;
                if(length<min_length){
                    min_length=length;
                }
                
                sum-=nums[left];
                left++;
            }
            if(nums[right]==target){
                return(1);
            }
            right++;
        }
        if(min_length==INT_MAX){
            min_length=0;
        }
        return(min_length);
    }
};