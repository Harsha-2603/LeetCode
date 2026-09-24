class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int max_count=INT_MIN;
        int count=0;
        for(char ch:s){
            if(ch=='('){
                count++;
            }
            else if(ch==')'){
                count--;
            }
            if(count>max_count){
                max_count=count;
            }
        }
        return(max_count);
    }
};