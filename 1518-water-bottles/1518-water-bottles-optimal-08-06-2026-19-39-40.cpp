class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numExchange>numBottles){
            return(numBottles);
        }
        int drintkingwater=numBottles;
        int left=0;
        while(numBottles>=numExchange){
            left=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            drintkingwater+=numBottles;
            numBottles+=left;
        }
        return(drintkingwater);
    }
};