class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int r=0, c=matrix[0].size()-1;
        while(c>=0 && r<matrix.size()){
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]<target){
                r++;
            }
            else if(matrix[r][c]>target){
                c--;
            }
        }
        return false;
    }
};