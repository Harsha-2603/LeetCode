class Solution {
public:
    int secondHighest(string s) {
        int len=s.size();
        int largest=-1;
        int sec_largest=-1;
        int d=0;
        for(int i=0;i<len;i++){
            if(isdigit(s[i])){
                d=s[i]-'0';
                if(d>largest){
                    sec_largest=largest;
                    largest=d;
                }
                else if(d!=largest && d>sec_largest){
                    sec_largest=d;
                }
            }     
        }
        return(sec_largest);
    }
};