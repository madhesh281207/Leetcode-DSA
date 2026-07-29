class Solution {
public:
    vector<vector<int>>diff={{0,1}, {1,0}, {-1,0}, {0,-1}};
    int dfs(vector<vector<char>>& grid,vector<vector<int>>& vis, int R, int C, int r, int c){
        if(r<0 || r>=R || c<0 || c>=C || vis[r][c]==1){
            return 0;
        }
        vis[r][c]=1;
    if(grid[r][c]=='1'){
        for(int i=0;i<4;i++){
            int nr= r + diff[i][0];
            int nc= c + diff[i][1];
            dfs(grid,vis,R,C,nr,nc);
        }
    }
    return 1;
}
    int numIslands(vector<vector<char>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        vector<vector<int>>vis(R,vector<int>(C,0));
        int ans=0;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(vis[r][c] == 0 && grid[r][c] == '1'){
                    ans+=dfs(grid,vis,R,C,r,c);
                }
            }
        }
        return ans;
    }
};