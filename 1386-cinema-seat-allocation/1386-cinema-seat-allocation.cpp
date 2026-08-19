class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, vector<int>> vis;
        int ans = 0;
        for(auto x : reservedSeats){
            vis[x[0]].push_back(x[1]);
        }
        for(auto x : vis){
            vector<int> v(11,0);
            for(auto col : x.second){
                v[col] = 1;
            }
            if(v[2]==0 && v[3]==0 && v[4]==0 && v[5]==0 &&
               v[6]==0 && v[7]==0 && v[8]==0 && v[9]==0){
                ans += 2;
            }
            else if(v[2]==0 && v[3]==0 && v[4]==0 && v[5]==0){
                ans++;
            }
            else if(v[4]==0 && v[5]==0 && v[6]==0 && v[7]==0){
                ans++;
            }
            else if(v[6]==0 && v[7]==0 && v[8]==0 && v[9]==0){
                ans++;
            }
        }
        ans += (n-vis.size())*2;
        return ans;
    }
};