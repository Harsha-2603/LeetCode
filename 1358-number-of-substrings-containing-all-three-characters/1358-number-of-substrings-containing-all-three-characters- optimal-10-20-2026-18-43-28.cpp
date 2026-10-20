class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        int count=0;
        int count_a=0;
        int count_b=0;
        int count_c=0;
        while(right<n){
            if(s[right]=='a'){
                count_a++;
            }
            else if(s[right]=='b'){
                count_b++;
            }
            else{
                count_c++;
            }
            
            while (count_a && count_b && count_c) {
                count += n - right;

                if (s[left] == 'a') count_a--;
                else if (s[left] == 'b') count_b--;
                else count_c--;

                left++;
            }

            right++;
        }
        return(count);
    }
};