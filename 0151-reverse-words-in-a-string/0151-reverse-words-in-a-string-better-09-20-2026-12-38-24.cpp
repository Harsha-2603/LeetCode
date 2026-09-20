class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> st;
        string r;
        int j=0;
        for(int i=0;i<n;i++){
            if(!isspace(s[i])){
                r.push_back(s[i]);
            }
            else if(!r.empty()){
                st.push_back(r);
                j++;
                r.clear();
            }
        } 
        if(!r.empty()) {
            st.push_back(r);
        }
        string d;
        for(int k=st.size()-1;k>=0;k--){
            d.append(st[k]);
            if(k==0){
                break;
            }
            d.append(" ");
        }
        return(d);
    }
};