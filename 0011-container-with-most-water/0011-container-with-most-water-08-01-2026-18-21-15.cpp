class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_water=INT_MIN;
        int i=0;
        int j=n-1;
        while(i<j){
            int water=0;
            int length=min(height[i],height[j]);
            int bredth=j-i;
            water=length*bredth;
            if(water>max_water){
                max_water=water;
            }   
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return(max_water);
    }
};