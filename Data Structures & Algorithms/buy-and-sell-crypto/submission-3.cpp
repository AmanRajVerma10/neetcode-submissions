class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=prices[0];
        int profit=0;
        for(const auto& price:prices){
            if(price<lowest){
                lowest=price;
            }
            profit=max(profit,price-lowest);
        }
        return profit;
    }
};
