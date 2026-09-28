class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int v:deck) mp[v]++;
        int count=0;
        for(auto it:mp){
            count=__gcd(it.second, count);
        }
        return count>1;
    }
};