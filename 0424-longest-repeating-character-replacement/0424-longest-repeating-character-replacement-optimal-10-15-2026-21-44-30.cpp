class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int max_freq = 0, max_length = 0;
        int left = 0;
        unordered_map<char, int> mpp;

        for (int right = 0; right < n; right++) {
            mpp[s[right]]++;
            max_freq = max(max_freq, mpp[s[right]]);

            int change = (right - left + 1) - max_freq;

            if (change > k) {
                mpp[s[left]]--;
                left++;
            }

            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};