class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int times=n/3;
        set<int> st;
        vector<int> vec;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>times){
                st.insert(nums[i]);
            }
        }
        for(auto it: st){
            vec.push_back(it);
        }
        return(vec);
    }
};