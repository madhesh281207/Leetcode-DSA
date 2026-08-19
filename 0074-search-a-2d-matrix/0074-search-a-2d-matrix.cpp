class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R = matrix.size();
        int C = matrix[0].size();
        int low=0, high=R*C-1;
        while(low<= high){
            int mid = low + (high-low)/2;
            int r = mid/C;
            int c = mid%C;
            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] < target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};