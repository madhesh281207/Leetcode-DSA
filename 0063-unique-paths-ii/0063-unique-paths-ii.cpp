class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        vector<vector<int>> dp(R, vector<int>(C,0));
        if(grid[0][0] == 1) return 0;
        dp[0][0] = 1;
        for(int r=0; r<R; r++){
            for(int c=0; c<C; c++){
                if(grid[r][c] == 1){
                    continue;
                }
                if(r>0) dp[r][c] += dp[r-1][c];
                if(c>0) dp[r][c] += dp[r][c-1];
            }
        }
        return dp[R-1][C-1];
    }
};