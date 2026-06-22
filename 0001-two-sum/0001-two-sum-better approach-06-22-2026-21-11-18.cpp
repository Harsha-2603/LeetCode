class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> a;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                a.push_back(i);
                a.push_back(mpp[rem]);
            }
            mpp[nums[i]]=i;
        }
        return(a);
    }
};