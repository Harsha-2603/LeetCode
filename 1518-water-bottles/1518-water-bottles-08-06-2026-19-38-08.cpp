class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numExchange>numBottles){
            return(numBottles);
        }
        int total=numBottles;
        int left=0;
        while(numBottles>=numExchange){
            left=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            total+=numBottles;
            numBottles+=left;
        }
        return(total);
    }
};