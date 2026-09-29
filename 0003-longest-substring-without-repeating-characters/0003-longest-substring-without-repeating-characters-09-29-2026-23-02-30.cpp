class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0){
            return(n);
        }
        int max_length=0;
        unordered_map<char,int> mpp;
        int i=0;
        int j=i;
        while(j<n){
            if(mpp.find(s[j])!=mpp.end()){
                i=max(i,mpp.find(s[j])->second+1);
                mpp[s[j]]=j;
            }
            mpp[s[j]]=j;
            int length=j-i+1;
            max_length=max(length,max_length);
            j++;
        }
        return(max_length);
    }
};