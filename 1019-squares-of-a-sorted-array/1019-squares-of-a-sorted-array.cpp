class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int length=nums.size();
        vector<int> numbers;
        for(int i=0;i<length;i++){
            int square=nums[i]*nums[i];
            numbers.push_back(square);
        }
        sort(numbers.begin(),numbers.end());
        return(numbers);
    }
};