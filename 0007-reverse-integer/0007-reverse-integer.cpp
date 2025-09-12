class Solution {
public:
    int reverse(int x) {
        long long r=0;
        long long num = 0; 
        while(x != 0){
            r=x%10;
            num=num*10+r;
            x=x/10;
        }
        if (num > INT_MAX || num < INT_MIN)
            return 0;
        return (int)num;    
}
};