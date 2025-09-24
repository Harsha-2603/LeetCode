class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>counts;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            counts.push_back(sum);
        }
        int max=counts[0];
        for(int i=1;i<counts.size();i++){
           if(counts[i]>max){
            max=counts[i];
           }
        }
        return(max);   
    }

};