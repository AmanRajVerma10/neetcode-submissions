class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefProd;
        int temp=1;
        for(const auto& num:nums){
            temp*=num;
            prefProd.push_back(temp);
        }
        temp=1;
        vector<int> postProd(nums.size(),1);
        for(int i=nums.size()-1;i>=0;i--){
            temp*=nums[i];
            postProd[i]=temp;
        }
        vector<int> ans(nums.size(),1);
        for(int i=0;i<ans.size();i++){
            if(i==0){
                ans[i]=postProd[i+1];
                continue;
            }
            if(i==ans.size()-1){
                ans[i]=prefProd[i-1];
                continue;
            }
            ans[i]=prefProd[i-1]*postProd[i+1];
        }
        return ans;
    }
};
