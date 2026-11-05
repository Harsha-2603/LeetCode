class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int moves=0;
        int smallest=INT_MAX;
        for(int i=0;i<n;i++){
            smallest=min(nums[i],smallest);
        }
        for(int i=0;i<n;i++){
            moves+=(nums[i]-smallest);
        }
        return(moves);
    }
};