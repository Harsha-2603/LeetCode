class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int iterator=1<<n;
        vector<vector<int>> arr;
        for(int i=0;i<iterator;i++){
            vector<int> a;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    a.push_back(nums[j]);
                }
            }
            arr.push_back(a);
        }
        return(arr);
    }
};