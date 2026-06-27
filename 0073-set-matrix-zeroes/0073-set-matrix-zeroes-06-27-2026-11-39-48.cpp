class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        unordered_multimap<int,int> mpp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    mpp.insert({i,j});
                }
            }
        }
        for(auto &it:mpp){
            //making rows zero
            for(int i=0;i<n;i++){
                matrix[it.first][i]=0;
            }
            //making col zero
            for(int j=0;j<m;j++){
                matrix[j][it.second]=0;
            }
        }
    }
};