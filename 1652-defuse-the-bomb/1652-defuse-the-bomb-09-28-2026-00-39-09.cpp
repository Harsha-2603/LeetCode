class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int elements=code.size();
        vector<int> final;
        if(k==0){
            for(int i=0;i<elements;i++){
                final.push_back(0);
            }
            return(final);
        }
        if(k>0){
            for(int i=0;i<elements;i++){
                int j=i+1;
                int sum=0;
                int count=k;
                while(count>0){
                    int index=j%elements;
                    sum+=code[index];
                    j++;
                    count--;
                }
                final.push_back(sum);
            }
        }
        if(k<0){
            for(int i=0;i<elements;i++){
                int j=i+elements+k;
                int sum=0;
                int count=k;
                while(count<0){
                    int index=j%elements;
                    sum+=code[index];
                    j++;
                    count++;
                }
                final.push_back(sum);
            }
        }
        return(final);
    }
};