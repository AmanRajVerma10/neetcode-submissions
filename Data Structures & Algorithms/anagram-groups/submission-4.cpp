class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto str: strs){
            vector<int> freq(26,0);
            for(char ch: str){
                freq[ch-'a']++;
            }
            string key;
            for(auto it:freq){
                key+= "#" + to_string(it);
            }
            m[key].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};
