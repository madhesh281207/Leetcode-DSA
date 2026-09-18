class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R=matrix.size(), C=matrix[0].size();
        vector<vector<int>> ans(C,vector<int>(R));
        for(int r=0; r<C; r++){
            for(int c=0; c<R; c++){
                ans[r][c]=matrix[c][r];
            }
        }
        return ans;
    }
};