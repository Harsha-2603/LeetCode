class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int iteration=0;
        while(iteration<31){
            int ans=1<<iteration;
            if(ans==n){
                return(true);
            }
            iteration++;
        }
        return(false);
    }
};