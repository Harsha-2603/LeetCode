class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mp;
        int len=nums.size();
        for(auto x: nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second>1){
                return(x.first);
            }
        }
        return(-1);
    }
};