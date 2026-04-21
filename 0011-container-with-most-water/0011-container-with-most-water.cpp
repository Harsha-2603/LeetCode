class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int max=INT_MIN;
        while(i<j){
            int length=0;
            if(height[i]<height[j]){
                length=height[i];
            }
            else length=height[j];
            int bredth=j-i;
            int area=length*bredth;
            if(area>max){
                max=area;
            }
            if(height[i]<height[j]) i++;
            else j--;
        }
         return(max);
    }
};