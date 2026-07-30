class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string one = "qwertyuiopQWERTYUIOP";
        string two = "asdfghjklASDFGHJKL";
        string three = "zxcvbnmZXCVBNM";
        unordered_map<char,int>mp;
        for(auto ch:one) mp[ch]=1;
        for(auto ch:two) mp[ch]=2;
        for(auto ch:three) mp[ch]=3;
        vector<string>ans;
        for(string str:words){
            int id=mp[str[0]];
            bool flag=true;
            for(char ch:str){
                if(mp[ch]!=id){
                    flag=false;
                }
            }
            if(flag == true){
                ans.push_back(str);
            }
        }
        return ans;
    }
};