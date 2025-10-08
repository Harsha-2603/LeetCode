class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        int length=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<length;i=i+2){
            for(int j=i-1;j<i;j++){
                arr.push_back(nums[i]);
                arr.push_back(nums[j]);
            }
        }
        return(arr);
    }
};