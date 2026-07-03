class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int found=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
                found=1;
                return(mid);
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(found==0){
            for(int i=0;i<n;i++){
                if(nums[i]>target){
                    return(i);
                }
            }
        }
        return(n);
    }    
};