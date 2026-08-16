class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string num="";
        while(n!=0){
            int rem=n%2;
            if(rem==1){
                num.push_back('1');
            }
            else{
                num.push_back('0');
            }
            n=n/2;
        }
        for(int i=0;i<num.size();i++){
            if(num[i]=='1'){
                count++;
            }
        }
        return(count);
    }
};