class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                vec.push_back(nums[i]);
            }
        }
        for(int i=0;i<vec.size();i++){
            nums[i]=vec[i];
        }
        for(int i=vec.size();i<n;i++){
            nums[i]=0;
        }
    }
};