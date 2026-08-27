class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            int max_count=INT_MIN;
            int max_element=0;
            for(auto &it:mpp){
                if(it.second>max_count){
                    max_count=it.second;
                    max_element=it.first;
                }
            }
            ans.push_back(max_element);
            mpp.erase(max_element);
        }   
        return(ans); 
    }
};