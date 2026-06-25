class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return(0);
        }
        set<int> ss;
        for(int i=0;i<n;i++){
            ss.insert(nums[i]);
        }
        int max_count=1;
        int count=1;
        for(auto it=ss.begin();next(it)!=ss.end();it++){
            if(*next(it)==(*it)){
                continue;
            }
            else if(*next(it)==(*it)+1){
                count++;
            }
            else{
                if(count>max_count){
                    max_count=count;
                }
                count=1;
            }
        }
        if(count>max_count){
            max_count=count;
        }
        return(max_count);
    }
};