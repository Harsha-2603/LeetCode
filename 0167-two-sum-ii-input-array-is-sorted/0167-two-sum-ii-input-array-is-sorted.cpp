class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len=numbers.size();
        vector<int> final;
                int left = 0;
        int right = len - 1;

        while(left < right){
            int sum = numbers[left] + numbers[right];

            if(sum == target){
                final.push_back(left + 1);
                final.push_back(right + 1);
                break;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return(final);
    }
};