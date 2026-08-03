class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string con = s+s;
        return con.substr(1, con.length()-2).find(s) != string::npos;
    }
};