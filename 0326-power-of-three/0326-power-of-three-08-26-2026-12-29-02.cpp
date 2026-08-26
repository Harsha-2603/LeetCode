class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return(false);
        }
        if(n==1){
            return(true);
        }
        double ans=n;    
        while(ans>0){
            ans=ans/3;
            if(ans==1){
                return(true);
            }
        }
        return(false);
    }
};