class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingcount=0;
        int current=1;
        int i=0;
        while(1){
            if(i<arr.size() && current==arr[i]){
                i++;
            }
            else{
                missingcount++;
                if(missingcount==k){
                    return(current);
                }
            }
            current++;
        }
    }
};