class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=nums1.size();
        int actualsize_1=m;
        int l=nums2.size();
        int actualsize_2=n;
        int left=0;
        int right=0;
        vector<int> temp;
        while(left<actualsize_1 && right<actualsize_2){
            if(nums1[left]<nums2[right]){
                temp.push_back(nums1[left]);
                left++;
            }
            else{
                temp.push_back(nums2[right]);
                right++;
            }
        }
        while(left<actualsize_1){
            temp.push_back(nums1[left]);
            left++;
        }
        while(right<actualsize_2){
            temp.push_back(nums2[right]);
            right++;
        }
        int t=temp.size();
        for(int i=0;i<t;i++){
            nums1[i]=temp[i];
        }
    }
};