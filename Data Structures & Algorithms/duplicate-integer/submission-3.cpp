class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it:nums){
            if(m.find(it)!=m.end()){
                return true;
            }
            m[it]++;
        }
        return false;
    }
};