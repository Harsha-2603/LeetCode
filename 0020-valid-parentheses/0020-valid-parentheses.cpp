class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c : s) {
            // If opening bracket, push into stack
            if(c=='(' || c=='{' || c=='[') {
                st.push(c);
            } else {
                // If closing bracket but stack is empty → invalid
                if(st.empty()) return false;

                // Check matching pair
                if(c==')' && st.top()!='(') return false;
                if(c=='}' && st.top()!='{') return false;
                if(c==']' && st.top()!='[') return false;

                st.pop(); // remove matched opening
            }
        }
        return st.empty(); // true if all brackets matched
    }
};
