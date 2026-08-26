class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        stack<int> s;
        for(auto price:prices){
            if(s.empty())s.push(price);
            else{
                if(price<s.top()){
                    s.push(price);
                }
                else{
                    profit=max(profit,price-s.top());
                }
            }
        }
        return profit;
    }
};
