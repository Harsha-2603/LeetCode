class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, profit=0;
        int minPrice = prices[0];     
        for(i=1; i<prices.size(); i++){   
            if(prices[i] < minPrice){
                minPrice = prices[i];     
            }
            else {                        
                int currProfit = prices[i] - minPrice;
                if(currProfit > profit){
                    profit = currProfit;  
                }
            }
        }
        return profit;   
    }
};
