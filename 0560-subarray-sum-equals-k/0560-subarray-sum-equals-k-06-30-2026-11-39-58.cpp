class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum==k){
                count++;
            }
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                count+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return(count);
    }
};