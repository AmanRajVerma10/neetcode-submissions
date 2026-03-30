class Solution {
public:

    // string encode(vector<string>& strs) {
    //     string enc="";
    //     for(int i=0;i<strs.size();i++){
    //         if(i==0){
    //             enc+=strs[i];
    //         }
    //         else{
    //             enc=enc+"#"+strs[i];
    //         }
    //     }
    //     return enc;
    // }

    // vector<string> decode(string s) {
    //     vector<string> ans;
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]!='#'){
    //             string temp="";
    //             int j=i;
    //             while(s[j]!='#' && j!=s.size()){
    //                 j++;
    //             }
    //             temp=s.substr(i,j-i);
    //             ans.push_back(temp);
    //             i=j;
    //         }
    //     }
    //     return ans;
    // }

    string encode(vector<string>& strs) {
        string encodedString;
        for (const string& str : strs) {
            encodedString += to_string(str.size()) + "#" + str;
        }
        return encodedString;
    }

    // Decode a single string into a list of strings.
    vector<string> decode(string s) {
        vector<string> decodedStrings;
        int i = 0;
        while (i < s.size()) {
            // Find the position of the first '#' delimiter.
            int delimiterPos = s.find('#', i);
            // Extract the length of the next string.
            int length = stoi(s.substr(i, delimiterPos - i));
            // Move the index to the start of the actual string.
            i = delimiterPos + 1;
            // Extract the string of the calculated length.
            decodedStrings.push_back(s.substr(i, length));
            // Move the index to the start of the next length marker.
            i += length;
        }
        return decodedStrings;
    }
};
