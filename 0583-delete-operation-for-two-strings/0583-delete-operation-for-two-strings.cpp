class Solution {
public:
    int minDistance(string word1, string word2) {
        int R=word1.length();
        int C=word2.length();
        int mx=0;
        vector<vector<int>> dp(R+1, vector<int>(C+1,0));
        for(int r=1; r<=R; r++){
            for(int c=1; c<=C; c++){
                if(word1[r-1] == word2[c-1]){
                    dp[r][c] =dp[r-1][c-1]+1;
                    mx = max(mx,dp[r][c]);
                }else {
                    dp[r][c] = max(dp[r-1][c],dp[r][c-1]);
                }
            }
        }
        return (R+C-2*mx);
    }
};