class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxi = *max_element(lights.begin(),lights.end());
        int ans = INT_MIN;
        for(int i=0; i<arrivalTime.size(); i++){
            int wait=0;
            int r = arrivalTime[i] % period;
            if(maxi > r) wait=0;
            else wait = period-r;
            ans = max(ans,wait);
        }
        return ans;
    }
};