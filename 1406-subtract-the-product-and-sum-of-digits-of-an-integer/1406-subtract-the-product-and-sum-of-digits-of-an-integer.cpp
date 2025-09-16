class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int result;
        while(n>0){
            int r=n%10;
            sum=sum+r;
            product=product*r;
            n=n/10;
        }
        result=product-sum;
        return(result);
    }
};