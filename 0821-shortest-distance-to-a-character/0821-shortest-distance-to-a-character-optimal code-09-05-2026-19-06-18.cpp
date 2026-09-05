class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> vec;
        vector<int> nums;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                nums.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            int len=INT_MAX;
            for(int j=0;j<nums.size();j++){
                int s=abs(nums[j]-i);
                if(s>=0 && s<len){
                    len=s;
                }
            }
            vec.push_back(len);
        }
        return(vec);
    }
};