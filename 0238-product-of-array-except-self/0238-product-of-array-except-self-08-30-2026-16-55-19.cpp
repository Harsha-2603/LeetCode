class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(prefix);
            prefix*=nums[i];
        }
        int sufix=1;
        for(int j=n-1;j>=0;j--){
            ans[j]=ans[j]*sufix;
            sufix*=nums[j];
        }
        return(ans);
    }
};