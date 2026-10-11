class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int count_trees = 0;
        unordered_map<int, int> mpp;
        int left = 0;
        int right = 0;
        int max_length = 0;
        while (right < n) {
             if (mpp.find(fruits[right]) == mpp.end()) {
                count_trees++;
            }
            mpp[fruits[right]]++;
            while (mpp.size() > 2) {
                mpp[fruits[left]]--;
                if (mpp[fruits[left]] == 0) {
                    mpp.erase(fruits[left]);
                    count_trees--;
                }
                left++;
            }
            int length = right - left + 1;
            max_length = max(max_length, length);
            right++;
        }
            return (max_length);
    }
};