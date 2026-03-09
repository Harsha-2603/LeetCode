class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int length=heights.size();
        vector<int>h1=heights;
        bool swapped;
        for(int i=0;i<length-1;i++){   
            swapped=false;
            for(int j=0;j<length-i-1;j++){
                if(heights[j]>heights[j+1]){
                    int temp=heights[j];
                    heights[j]=heights[j+1];
                    heights[j+1]=temp;
                    swapped=true;
                }
            }
            if(!swapped){
                break;
            }
        }
        int count=0;
        for(int i=0;i<length;i++){
            if(h1[i]==heights[i]){
                count++;
            }
        }
        return(length-count);
    }
};