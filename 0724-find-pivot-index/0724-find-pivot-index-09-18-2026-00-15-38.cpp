class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int piviot=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            rightsum=sum-leftsum-nums[i];
            if(leftsum==rightsum){
                return(i);
            }
            leftsum+=nums[i];
        }
        return(-1);
    }
};