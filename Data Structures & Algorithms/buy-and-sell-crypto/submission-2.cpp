class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=i+1;
        int ans=0;
        while(j<prices.size()){
            int profit=prices[j]-prices[i];
            if(prices[i]<=prices[j]){
                j++;
            }
            else{
                i=j;
            }
            ans=max(ans,profit);
        }
        return ans;
    }
};
