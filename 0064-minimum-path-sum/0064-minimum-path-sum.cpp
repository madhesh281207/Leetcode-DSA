class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int R = grid.size();
       int C = grid[0].size();
       vector<vector<int>> dp(R+1,vector<int>(C+1,10000000));
       for(int r=1; r<=R; r++){
        for(int c=1; c<=C; c++){
            if(r==1 && c==1){
                dp[r][c] = grid[r-1][c-1];
                continue;
            }
                dp[r][c] = grid[r-1][c-1] + min(dp[r-1][c],dp[r][c-1]);
            }
       } 
       return dp[R][C];
    }
};