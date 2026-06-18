//brute force solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp;
        k=k%n;
        for(int it=n-k;it<n;it++){
            temp.push_back(nums[it]);
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
    }
};
