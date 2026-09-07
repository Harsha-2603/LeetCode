class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int final_score=0;
        for(int i=0;i<n;i++){
            int score=0;
            for(int j=0;j<n-1;j++){
                if(s[j]==s[j+1]){
                    score++;
                }
            }
            if(score==k){
                final_score++;
            }
            reverse(s.begin(), s.begin() + 1);
            reverse(s.begin() + 1, s.end());
            reverse(s.begin(), s.end());
        }
        return(final_score);
    }
};