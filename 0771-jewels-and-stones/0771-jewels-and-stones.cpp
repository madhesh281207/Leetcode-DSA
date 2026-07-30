class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(char c:jewels){
            for(char ch:stones){
                if(c==ch) ans++;
            }
        }
        return ans;
    }
};