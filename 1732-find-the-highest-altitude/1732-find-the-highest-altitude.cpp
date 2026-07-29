class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int N=gain.size();
        vector<int>kd(N+1);
        kd[0]=0;
        int ans=0;
        for(int i=0 ; i<N ; i++){
            kd[i+1]=gain[i]+kd[i];
            ans=max(ans,kd[i+1]);
        }        
        return ans;
    }
};