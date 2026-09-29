class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> q;
        int R=image.size();
        int C=image[0].size();
        vector<vector<bool>> vis(R, vector<bool>(C, false));
        int diff[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
        q.push({sr,sc});
        int temp=image[sr][sc];
        image[sr][sc]=color;
        vis[sr][sc]=true;
        while(!q.empty()){
            auto it=q.front(); q.pop();
            int r=it.first, c=it.second;
            for(int i=0; i<4; i++){
                int nr=r+diff[i][0];
                int nc=c+diff[i][1];
                if(nr>=0 && nr<R && nc>=0 && nc<C && image[nr][nc]==temp && vis[nr][nc]==false){
                    q.push({nr,nc});
                    image[nr][nc]=color;
                    vis[nr][nc]=true;
                }
            }
        }
        return image;
    }
};