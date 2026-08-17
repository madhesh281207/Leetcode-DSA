class Solution {
public:
    int recursive(vector<int>& nums,int i, vector<int>& dp){
        int N = nums.size();
        if(i>=N-1) return 0;
        if(dp[i] != -1) return dp[i];
        int ans = 1e9;
        for(int j=1;j<=nums[i];j++){
            if(i+j <= N-1){
                ans = min(ans, 1+recursive(nums,i+j,dp));
            }
        }
        return dp[i] = ans;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
       return recursive(nums,0,dp);
    }
};