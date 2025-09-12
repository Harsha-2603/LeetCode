class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int length=nums.size();
       vector <int> count_array;
       int count=0;
       for(int i=0;i<length;i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0){
                count_array.push_back(count);
                count=0;
            }
       } 
       count_array.push_back(count);
       int max=*max_element(count_array.begin(),count_array.end());
       return(max);
    }
};