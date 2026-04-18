int speedUp = []
{std::ios::sync_with_stdio(0); std::cin.tie(0); return 0; }();
void printComma(int k){
    if(k > 1) std::cout<<',' ;
}
int init = []
{
    std::ofstream out("user.out");
    std::cout.rdbuf(out.rdbuf());
    for (string s; std::getline(std::cin, s);)
    {
        int zerocount = 0 , onecount = 0 , twocount = 0 , totalnums = 0 ;
        for(int _i = 1 ; _i < s.length() ; _i +=2 ){
            int v = s[_i] & 15 ;
            if(v == 0) zerocount++ ;
            else if(v == 1) onecount++ ;
            else if(v == 2) twocount++ ;
            totalnums++ ;
        }
        std::cout << '[' ;
        while(zerocount > 0){ std::cout << 0 ; printComma(totalnums--) ; --zerocount ; }
        while(onecount > 0){ std::cout << 1 ; printComma(totalnums--) ; --onecount ;}
        while(twocount > 0){ std::cout << 2 ; printComma(totalnums--) ; --twocount ;}
        std::cout << ']' << endl ;
    }
    exit(0);
    return 0;
}();
class Solution {    
public:
    int partitionIndex(vector<int> &nums,int low,int high){
        int i=low;
        int j=high;
        int piviot=nums[low];
        while(i<j){
            while(i<=high && nums[i]<=piviot) i++;
            while(j>=low && nums[j]>piviot) j--;
            if(i<j) swap(nums[i],nums[j]);
        }
        swap(nums[j],nums[low]);
        return(j);
    }

    void quicksort(vector<int> &nums,int low,int high){
        if(low<high){
            int pi=partitionIndex(nums,low,high);
            quicksort(nums,low,pi-1);
            quicksort(nums,pi+1,high);
        }
    }

    void sortColors(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
    }
};