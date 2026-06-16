class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec;
        for(int i=0;i<n;i++){
            bool found=0;
            for(int j=0;j<vec.size();j++){
                if(vec[j]==nums[i]){
                    found=1;
                }
            }
            if(found==0){
                vec.push_back(nums[i]);
            }
        }
        for (int i = 0; i < vec.size(); i++) {
            nums[i] = vec[i];
        }
        return(vec.size());
    }
};