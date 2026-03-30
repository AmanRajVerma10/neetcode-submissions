class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> arr(25,0);
        for(int i=0;i<s.size();i++){
            arr[s[i]-97]++;
            arr[t[i]-97]--;
        }
        for(int it:arr){
            if(it!=0)return false;
        }
        return true;

    }
};
