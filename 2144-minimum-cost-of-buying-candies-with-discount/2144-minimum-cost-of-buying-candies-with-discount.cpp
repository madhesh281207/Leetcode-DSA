class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int r=cost.size()-1;
        int temp=0,ans=0;
        while(r>=0){
            if(temp == 2){
                r--;
                temp=0;
                continue;
            }
            ans+=cost[r];
            temp++;
            r--;
        }
        return ans;
    }
};