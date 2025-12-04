class Solution {
public:
    int calPoints(vector<string>& operations) {
        int length=operations.size();
        vector<int> sum;
        for(int i=0;i<length;i++){
            if(operations[i]=="+" && i>=1){
                sum.push_back(sum[sum.size()-2]+sum[sum.size()-1]);
            }
            else if(operations[i]=="D"){
                sum.push_back(sum[sum.size()-1]*2);
            }
            else if(operations[i]=="C"){
                sum.pop_back();
            }
            else
                //stoi is used for converting string to number and in c language we use atoi

                sum.push_back(stoi(operations[i]));
        }
        int total_sum=0;
        for(int i=0;i<sum.size();i++){
            total_sum+=sum[i];
        }
        return(total_sum);
    }
};