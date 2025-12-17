class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len=nums.size();
        if(len==0){
            return(0);
        }
        sort(nums.begin(),nums.end());
        int min=INT_MIN;
        int count=0;
        int largest=1;
        for(int i=0;i<len;i++){
            if(nums[i]-1==min){
                count++;
                min=nums[i];
            }
            else if(nums[i]!=min){
                count=1;
                min=nums[i];
            }
            if(count>largest){
                largest=count;
            }
        }
        return(largest);
    }
};