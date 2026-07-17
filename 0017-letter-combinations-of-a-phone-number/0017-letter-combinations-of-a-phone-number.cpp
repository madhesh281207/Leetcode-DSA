class Solution {
public:
    vector<string> ans;
    vector<string> mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(int i,string digits,string s)
    {
        if(i==digits.size())
        {
            ans.push_back(s);
            return;
        }
        string temp=mp[digits[i]-'0'];
        for(char c:temp)
        {
            s.push_back(c);
            solve(i+1,digits,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return{};
        solve(0,digits,"");
        return ans;
    }
};