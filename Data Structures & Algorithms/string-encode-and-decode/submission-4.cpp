class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded="";
        for(auto str:strs){
            string len_string=to_string(str.size());
            encoded+= len_string+"#"+str;
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
            int count= stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,count));
            i=j+1+count;
        }
        return ans;
    }
};
