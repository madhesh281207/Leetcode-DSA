class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int strl=words.size();
        int wgtl=weights.size();
        string ans;
        for(int i=0;i<strl;i++){
            string str=words[i];
            int temp=0;
            for(int s=0;s<str.size();s++){
                char ch=str[s];
                temp+=weights[ch-'a'];
            }
            ans.push_back('z'-(temp%26));
        }
        return ans;
    }
};