class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto str: strs){
            string sorted_str= str;
            sort(sorted_str.begin(),sorted_str.end());
            m[sorted_str].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it: m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
