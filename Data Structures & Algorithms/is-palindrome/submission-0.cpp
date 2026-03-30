class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(iswalnum(s[i])){
                if(s[i]>='A' && s[i]<='Z'){
                    s[i]=s[i]+32;
                }
                str+=s[i];
            }
        }
        int i=0,j=str.size()-1;
        if(i==j)return true;
        while(i<=j){
            if(str[i]!=str[j])return false;
            i++;
            j--;
        }
        return true;
    }
};
