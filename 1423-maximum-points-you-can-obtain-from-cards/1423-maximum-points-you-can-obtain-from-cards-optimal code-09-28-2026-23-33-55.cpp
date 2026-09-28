class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int right_sum=0;
        int left_sum=0;
        for(int m=n-k;m<n;m++){
            right_sum+=cardPoints[m];
        }
        int max_points=INT_MIN;
        int j=n-k;
        int i=0;
        for(int l=0;l<k+1;l++){
            int final_sum=right_sum+left_sum;
            if(final_sum>max_points){
                max_points=final_sum;
            }
            if(l == k)
                break;
            right_sum-=cardPoints[j];
            j++;
            left_sum+=cardPoints[i];
            i++;
        }
        return(max_points);
    }
};