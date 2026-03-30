class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int largest=INT_MIN;
        for(auto it: piles){
            largest=max(it,largest);
        }
        int low=1,high=largest;
        int ans=largest;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalTime=0;
            for(int p:piles){
                if(p%mid==0){
                    totalTime+=p/mid;
                }
                else{
                    totalTime+=(p/mid)+1;
                }
            }
            if(totalTime>h){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
