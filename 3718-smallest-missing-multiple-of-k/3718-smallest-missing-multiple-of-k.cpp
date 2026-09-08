class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        int N=nums.size();
        int mx=0;
        for(int i=0; i<N; i++){
            if(nums[i]%k == 0){
                st.insert(nums[i]);
                mx=max(mx,nums[i]);
            }
        }
        for(int i=k; i<=mx; i+=k){
            if(st.find(i) == st.end()){
                return i;
            }
        }
        return mx+k;
    }
};