class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int score=a+b+c;
        int max_num=max({a,b,c});
        return(min(score/2,score-max_num));
    }
};