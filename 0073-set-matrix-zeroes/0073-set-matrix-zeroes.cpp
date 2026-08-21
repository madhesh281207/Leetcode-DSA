class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        vector<bool> rows(R,false);
        vector<bool> cols(C,false);
        for(int row=0; row<R; row++){
            for(int col=0; col<C; col++){
                if(matrix[row][col] == 0){
                    rows[row] = true;
                    cols[col] = true;
                }
            }
        }
        for(int row=0; row<R; row++){
            for(int col=0; col<C; col++){
                if(rows[row] || cols[col]){
                    matrix[row][col] = 0;
                }
            }
        }
    }
};