class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct=1;
        int zeroCount=0;
        for(auto it:nums){
            if(it!=0){
            totalProduct*=it;
            }else{
                zeroCount++;
            }
        }
        vector<int> ans(nums.size(),0);
        if(zeroCount==0){
            for(int i=0;i<nums.size();i++){
            ans[i]=(totalProduct/nums[i]);
        }
        return ans;
        }
        else if(zeroCount>1){
            return ans;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans[i]=totalProduct;
                }
            }
            return ans;
        }
        
    }
};
