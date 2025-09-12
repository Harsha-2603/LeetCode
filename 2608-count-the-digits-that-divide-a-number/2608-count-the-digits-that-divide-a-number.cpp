class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int number=num;
        while(num>0){
            int r=num%10;
            if(number%r==0){
                count=count+1;
            }
            num=num/10;
        }
        return(count);
    }
};