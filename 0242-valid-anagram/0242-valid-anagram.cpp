class Solution {
public:
    bool isAnagram(string s, string t) {
        int len_s=s.length();
        int len_t=t.length();
        if(len_s!=len_t){
            return(0);
        }
        int hash_s[26]={0},hash_t[26]={0};
        for(int i=0;i<len_s;i++){
            hash_s[s[i]-'a']++;
            hash_t[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash_s[i]!=hash_t[i]){
                return(0);
            }
        }
        return(1);
          
    }
};