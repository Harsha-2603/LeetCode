class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int minimum=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<minimum){
                minimum=nums[mid];
            }
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return(minimum);
    }
};