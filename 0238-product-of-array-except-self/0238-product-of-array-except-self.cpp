class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N=nums.size();
        vector<int> ans(N,1);
        int psum=1,ssum=1;
        for(int i=0;i<N;i++){
            ans[i]*=psum;
            psum*=nums[i];
        }
        for(int i=N-1;i>=0;i--){
            ans[i]*=ssum;
            ssum*=nums[i];
        }
        return ans;
    }
};