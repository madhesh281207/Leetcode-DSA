class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>sol;
        for(int r=0; r<mat.size(); r++){
            int sold=0;
            for(int c=0; c<mat[r].size(); c++){
                if(mat[r][c]==1) sold++;
            }
            sol.push_back({sold,r});
        }
        sort(sol.begin(),sol.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(sol[i].second);
        }
        return ans;
    }
};