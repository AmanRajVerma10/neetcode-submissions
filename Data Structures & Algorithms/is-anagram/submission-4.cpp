class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> arr(26,0);
        for(auto it: s){
            arr[it-'a']++;
        }
        for(auto it:t){
            arr[it-'a']--;
        }
        for(auto it:arr){
            if(it){
                return false;
            }
        }
        return true;
    }
};
