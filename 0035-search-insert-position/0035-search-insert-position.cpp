class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length=nums.size();
        int l;
        if(target <= nums[0]){
            return(0);
        }
        for(int i=0;i<length-1;i++){
            if(target==nums[i]){
                return(i);
            }
            if(nums[i]<target && target<=nums[i+1]){
                return(i+1);
            }
        }
        return(length);
    }

};