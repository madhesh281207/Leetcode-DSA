class Solution {
public:
    int dir[8][2] = {{0,1}, {0,-1}, {1,0}, {1,-1}, {1,1}, {-1,1}, {-1,-1}, {-1,0}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int N=grid.size();
        if(grid[0][0] || grid[N-1][N-1]) return -1;
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,0},1});
        grid[0][0] = 1;
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            int r=cur.first.first;
            int c=cur.first.second;
            int dis=cur.second;
            if(r==N-1 && c==N-1) return dis;
            for(auto &d:dir){
                int nr=r+d[0];
                int nc=c+d[1];
                if(nr>=0 && nr<N && nc>=0 && nc<N && grid[nr][nc]==0){
                    grid[nr][nc] = 1;
                    q.push({{nr,nc},dis+1});
                }
            }
        }
        return -1;
    }
};