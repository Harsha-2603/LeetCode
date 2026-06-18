class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int maximum=*max_element(nums.begin(),nums.end());
        bool found=false;
        int lost;
        for(int i=0;i<maximum;i++){
            bool got=false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){
                    got=true;
                }
            }
            if(got==false){
                lost=i;
                found=true;
            }
        }
        if(found!=true){
            return(maximum+1);
        }
        return(lost);
    }
};