class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return(nums[0]);
        }
        int max_product=INT_MIN;
        int pre_pro=1;
        int suf_pro=1;
        for(int i=0;i<n;i++){
            if (pre_pro == 0)
                pre_pro = 1;
            if (suf_pro == 0)
                suf_pro = 1;
            pre_pro*=nums[i];
            suf_pro*=nums[n-1-i];
            if(pre_pro>max_product){
                max_product=pre_pro;
            }
            if(suf_pro>max_product){
                max_product=suf_pro;
            }
        }
        return(max_product);
    }
};