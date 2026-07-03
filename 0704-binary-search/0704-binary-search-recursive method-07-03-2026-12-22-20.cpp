class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low>high){
            return(-1);
        }
        int mid=low+(high-low)/2;
        if(target==nums[mid]){
            return(mid);
        }
        else if(target>nums[mid]){
            low=mid+1;
            return binarySearch(nums,low,high,target);
        }
        else{
            high=mid-1;
            return binarySearch(nums,low,high,target);
        }
    }

    int search(vector<int>& nums, int target) {
        return(binarySearch(nums, 0, nums.size() - 1, target));
    }
};