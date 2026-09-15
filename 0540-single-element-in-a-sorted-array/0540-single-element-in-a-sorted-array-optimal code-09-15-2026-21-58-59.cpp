class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid%2==1){
                mid--;
            }
            if(mid+1<n && nums[mid]==nums[mid+1]){
                low=mid+2;
            }
            else{
                high=mid-1;
            }
        ans=nums[low];
        }
        return(ans);
    }
};