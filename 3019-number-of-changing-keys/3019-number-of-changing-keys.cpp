class Solution {
public:
    int countKeyChanges(string s) {
        int len=s.size();
        for(int i=0;i<len;i++){
            s[i] = tolower(s[i]);
        }
        int count=0;
        for(int j=0;j<len-1;j++){
            if(s[j]!=s[j+1]){
                count++;
            }
        }
        return(count);
    }
};