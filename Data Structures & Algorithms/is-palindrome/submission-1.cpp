class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(iswalnum(s[i]) && iswalnum(s[j])){
                if(tolower(s[i])!=tolower(s[j])){
                    return false;
                }
                i++;
                j--;
            }
            else if(!iswalnum(s[i])){
                i++;
            }
            else if(!iswalnum(s[j])){
                j--;
            }
        }
        return true;
    }
};
