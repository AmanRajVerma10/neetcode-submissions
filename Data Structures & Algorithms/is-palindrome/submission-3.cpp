class Solution {
public:
    bool isPalindrome(string s) {
        string sNoSpace="";
        for(const auto& str:s){
            if(isalnum(str)){
                sNoSpace+=tolower(str);
            }
        }
        int l=0,r=sNoSpace.size()-1;
        while(l<=r){
            if(sNoSpace[l]!=sNoSpace[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
