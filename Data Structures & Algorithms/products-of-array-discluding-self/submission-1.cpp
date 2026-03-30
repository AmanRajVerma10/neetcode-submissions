class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix,suffix;
        for(auto it:nums){
            prefix.push_back(it);
            suffix.push_back(it);
        }
        for(int i=1;i<prefix.size();i++){
            prefix[i]=prefix[i]*prefix[i-1];
        }
        for(int i=suffix.size()-2;i>=0;i--){
            suffix[i]=suffix[i]*suffix[i+1];
        }
        vector<int> ans(nums.size(),1);
        for(int i=0;i<ans.size();i++){
            if(i==0){
                ans[i]=suffix[i+1];
            }
            else if(i==ans.size()-1){
                ans[i]=prefix[i-1];
            }
            else{
                ans[i]=prefix[i-1]*suffix[i+1];
            }
        }
        return ans;
    }
};
