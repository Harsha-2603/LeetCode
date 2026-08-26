class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> arr;
        int iteration=1<<n;
        for(int i=0;i<iteration;i++){
            vector<int> s;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    s.push_back(nums[j]);
                }
            }
            arr.push_back(s);
        }
        return(arr);
    }
};