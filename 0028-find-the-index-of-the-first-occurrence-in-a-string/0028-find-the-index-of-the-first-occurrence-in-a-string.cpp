class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystack_length=haystack.size();
        int needle_length=needle.size();
        if(needle_length>haystack_length){
            return(-1);
        }
        for(int i=0;i<=haystack_length-needle_length;i++){
            int count=0;
            for(int j=0;j<needle_length;j++){
                if(haystack[i+j]==needle[j]){
                    count++;
                }
            }
            if(count==needle_length){
                return(i);
            }
        }
        return(-1);
    }
};