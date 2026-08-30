class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> productarr;
        int count=0;
        int totalprowithout0=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                totalprowithout0*=nums[i];
            }    
        }
        for(int i=0;i<n;i++){
            if(count==0){
                int ans=totalprowithout0/nums[i];
                productarr.push_back(ans);
            }
            else if(count==1 && nums[i]==0){
                productarr.push_back(totalprowithout0);
            }
            else{
                productarr.push_back(0);
            }
        }
        return(productarr);
    }
};