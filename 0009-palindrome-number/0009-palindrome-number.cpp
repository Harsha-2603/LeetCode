class Solution {
public:
    bool isPalindrome(int x) {
        long int temp=x;
        long int r=1;
        long int s=0;
        while(x>0){
            r=x%10;
            s=(s*10)+r;
            x=x/10;
        }
        if(temp==s){
            return(1);
        }
        else
            return(0);
    }
};