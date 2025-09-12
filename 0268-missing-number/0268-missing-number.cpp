class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int first=0;
        int largest=0;
        int sum_array=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
            sum_array=sum_array+nums[i];
        }
        int sum=(len*(len+1))/2;
        int p=(sum-sum_array);
        int q=(largest+1);
        if(nums[0]==1 && len==1){
            return(0);
        }
        if(sum==sum_array){
           if(largest == len) return 0;  
           return(q);                    
        }

        else {
            return(p);
        } 
        return(0); 
    }               
};