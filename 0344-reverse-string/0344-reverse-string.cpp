class Solution {
public:
    void reverseString(vector<char>& s) {
        int length=s.size();
        vector<char> rearranged;
        for(int i=length-1;i>=0;i--){
                rearranged.push_back(s[i]);
        }
        s=rearranged;
    }
};