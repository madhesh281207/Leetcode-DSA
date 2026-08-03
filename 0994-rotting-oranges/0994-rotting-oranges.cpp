class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int R=grid.size(),C=grid[0].size();
        int time=0;
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(grid[i][j]==1) fresh++;
                else if(grid[i][j]==2) q.push({i,j});
            }
        }
        int dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
        if(q.empty() && fresh==0) return 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int adjr = row+dir[i][0];
                int adjc= col+dir[i][1];
                if(adjr>=0 && adjr<R&& adjc<C && adjc>=0 && grid[adjr][adjc]==1){
                    q.push({adjr,adjc});
                    grid[adjr][adjc]=2;
                    fresh--;
                }
            }
            }
            time++;
        }
        if(fresh==0) return time-1;
        return -1;
    }
};