class Solution {
public:
    int partitionIndex(vector<int> &nums,int low,int high){
        int i=low;
        int j=high;
        int piviot=nums[low];
        while(i<j){
            while(i<=high && nums[i]<=piviot) i++;
            while(j>=low && nums[j]>piviot) j--;
            if(i<j) swap(nums[i],nums[j]);
        }
        swap(nums[j],nums[low]);
        return(j);
    }

    void quicksort(vector<int> &nums,int low,int high){
        if(low<high){
            int pi=partitionIndex(nums,low,high);
            quicksort(nums,low,pi-1);
            quicksort(nums,pi+1,high);
        }
    }

    void sortColors(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
    }
};