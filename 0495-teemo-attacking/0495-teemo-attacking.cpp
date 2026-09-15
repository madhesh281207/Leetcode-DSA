class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        int n=timeSeries.size();
        for(int i=0; i<n-1; i++){
            int d=timeSeries[i+1]-timeSeries[i];
            ans += d>duration?duration:d;
        }
        return timeSeries.size()?ans+duration:0;
    }
};