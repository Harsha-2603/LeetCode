class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int element=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
                count=count+1;
            }
            else if(nums[i]==element && count>0){
                count=count+1;
            }
            else {
                count=count-1;
            }
        }
        return(element);
    }
};