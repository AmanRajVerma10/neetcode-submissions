class Solution {
public:

 string encode(vector<string>& strs) {
        string encodedString;
        for (const string& str : strs) {
            encodedString += to_string(str.size()) + "#" + str;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> decodedStrings;
        int i = 0;
        while (i < s.size()) {
            int delimiterPos = s.find('#', i);
            int length = stoi(s.substr(i, delimiterPos - i));
            i = delimiterPos + 1;
            decodedStrings.push_back(s.substr(i, length));
            i += length;
        }
        return decodedStrings;
    }
};
