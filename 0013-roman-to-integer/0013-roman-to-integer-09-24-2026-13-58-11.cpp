class Solution {
public:
    int romanToInt(string s) {
        int len=s.size();
        int sum=0;
        for(int i=0;i<len;i++){
            if(s[i]=='I'){
                sum=sum+1;
            }
            else if(s[i]=='V'){
                sum=sum+5;
            }
            else if(s[i]=='X'){
                sum=sum+10;
            }
            else if(s[i]=='L'){
                sum=sum+50;
            }
            else if(s[i]=='C'){
                sum=sum+100;
            }
            else if(s[i]=='D'){
                sum=sum+500;
            }
            else{
                sum=sum+1000;
            }
        }
        for(int i=1;i<len;i++){
            if((s[i]=='V' || s[i]=='X') && s[i-1]=='I'){
                sum=sum-2;
            }
            else if((s[i]=='L' || s[i]=='C') && s[i-1]=='X'){
                sum=sum-20;
            }
            else if((s[i]=='D' || s[i]=='M') && s[i-1]=='C'){
                sum=sum-200;
            }
        }    
        return(sum);
    }
};