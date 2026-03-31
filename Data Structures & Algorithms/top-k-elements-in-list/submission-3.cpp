class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto it:nums){
            m[it]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto it:m){
            bucket[it.second].push_back(it.first);
        }
        vector<int> res;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int n: bucket[i]){
                res.push_back(n);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};
