class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestbuy=prices[0];
        int max_profit=0;
        for(int i=1;i<n;i++){
            int profit=prices[i]-bestbuy;
            if(profit>max_profit){
                max_profit=profit;
            }
            if(prices[i]<bestbuy){
                bestbuy=prices[i];
            }
        }
        return(max_profit);
    }
};