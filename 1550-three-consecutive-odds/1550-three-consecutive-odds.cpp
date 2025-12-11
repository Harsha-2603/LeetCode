class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int len=arr.size();
        bool q=0;
        if(len<3){
            return(q);
        }
        for(int i=0;i<len-2;i++){
            int a=arr[i],b=arr[i+1],c=arr[i+2];
            if(a%2!=0 && b%2!=0 && c%2!=0){
                q=1;
            }    
        }
        return(q);
    }
};