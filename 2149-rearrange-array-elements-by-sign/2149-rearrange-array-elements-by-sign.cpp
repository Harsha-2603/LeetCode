class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int len=nums.size();
        vector<int> arr(len);
        int p_num=0;
        int n_num=1;
        for(int i=0;i<len;i++){
            if(nums[i]>0){
                arr[p_num]=nums[i];
                p_num=p_num+2;
            }
            else{
                arr[n_num]=nums[i];
                n_num=n_num+2;
            }

        }
        for(int i=0;i<len;i++){
            nums[i]=arr[i];
        }
        return(nums);
    }
};