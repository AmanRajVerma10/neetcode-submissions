class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<lowest){
                lowest=prices[i];
            }
            int profit=prices[i]-lowest;
            ans=max(ans,profit);
        }
        return ans;
    }
};
