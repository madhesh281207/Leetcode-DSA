class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        map<string, int> mp;
        string word="";
        int count=-1;
        for(char c:s){
            if(isalpha(c)){
                word+=tolower(c);
            }else{
                if(word !=""){
                    mp[word]++;
                    word="";
                }
            }
        }
        if(word!=""){
            mp[word]++;
        }
        for(auto it:mp){
            if(it.second > count && find(banned.begin(),banned.end(),it.first)==banned.end()){
                word=it.first;
                count=it.second;
            }
        }
        return word;
    }
};