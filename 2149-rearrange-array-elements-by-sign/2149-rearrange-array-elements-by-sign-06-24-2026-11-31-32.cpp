class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        vector<int> pos;
        vector<int> neg;

        for(int i=0;i<n;i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else    
                neg.push_back(nums[i]);
        }
        for(int i=0,j=0;i<pos.size(),j<neg.size();i++,j++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return(res);
    }
};