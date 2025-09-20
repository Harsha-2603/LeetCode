class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum_not=0;
        int sum_yes=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                sum_yes+=i;
            }
            else{
                sum_not+=i;
            }
        }
        int result=sum_not-sum_yes;
        return(result);
    }
};