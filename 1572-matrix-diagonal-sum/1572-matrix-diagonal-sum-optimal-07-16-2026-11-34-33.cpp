class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int sum=0;
        int left_sum=0;
        int right_sum=0;
        for(int i=0,j=0;i<m,j<m;i++,j++){
            left_sum+=mat[i][j];
        }
        for(int i=0,j=m-1;i<m,j>=0;i++,j--){
            right_sum+=mat[i][j];
            if(i==j){
                right_sum-=mat[i][j];
            }
        }
        sum=right_sum+left_sum;
        return(sum);
    }
};