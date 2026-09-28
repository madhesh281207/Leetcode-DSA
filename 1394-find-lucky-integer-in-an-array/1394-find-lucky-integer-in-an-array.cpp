class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(auto v:arr) mp[v]++;
        int ans=-1;
        for(auto it:mp){
            if(it.first == it.second) ans=it.first;
        }
        return ans;
    }
};