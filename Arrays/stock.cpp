class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0],profit=0;
        for(auto it:prices){
            if(minPrice>it) minPrice=it;
            int price=it-minPrice;
            if(profit<price) profit=price;
        }
        return profit;
    }       
};