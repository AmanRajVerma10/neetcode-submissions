class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans(2,-1);
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(m.find(temp)!=m.end()){
                ans[0]=m[temp];
                ans[1]=i;
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};
