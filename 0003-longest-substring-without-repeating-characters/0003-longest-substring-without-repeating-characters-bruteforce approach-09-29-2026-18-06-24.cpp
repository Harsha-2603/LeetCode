class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int max_count=0;//use 0 insted of INT_MIN so that it can handel the empty strings
        for(int i=0;i<n;i++){
            int count=0;
            int hasharray[256]={0};
            for(int j=i;j<n;j++){
                if(hasharray[s[j]]==1){
                    break;
                }
                hasharray[s[j]]++;
                count++;
            }
            if(count>max_count){
                max_count=count;
            }
        }
        return(max_count);
    }
};