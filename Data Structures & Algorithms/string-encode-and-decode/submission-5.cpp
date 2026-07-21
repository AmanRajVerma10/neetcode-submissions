class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(const auto& str:strs){
            int lenStr=str.size();
            encoded+= to_string(lenStr)+'#'+str;
        }
        for(auto it:encoded){
            cout<<it;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i=0;i<s.size();){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return ans;
    }
};
