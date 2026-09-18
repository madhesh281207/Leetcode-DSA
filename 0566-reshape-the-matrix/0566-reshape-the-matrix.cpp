class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        if(row*col != r*c) return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        int count=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                ans[count/c][count%c]=mat[i][j];
                count++;
            }
        }
        return ans;
    }
};