class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> final;
        for(int i=0;i<col;i++){
            vector<int> inter;
            for(int j=0;j<row;j++){
                inter.push_back(matrix[j][i]);
            }
            final.push_back(inter);
        }
        return(final);
    }
};