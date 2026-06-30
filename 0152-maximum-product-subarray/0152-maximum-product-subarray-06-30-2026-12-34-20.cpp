class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return(nums[0]);
        }
        int product=1;
        int maxproduct=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                product=product*nums[j];
                if(product>maxproduct){
                    maxproduct=product;
                }
            }
            product=1;
        }
        return(maxproduct);
    }
};