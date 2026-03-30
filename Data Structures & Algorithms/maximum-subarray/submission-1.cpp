class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(current_sum<0){
                current_sum=0;
            }
            current_sum+=nums[i];
            ans=max(ans,current_sum);
        }
        return ans;
    }
};
