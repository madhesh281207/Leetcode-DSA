class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int N = nums.size();
        vector<int> sufmin(N);
        sufmin[N-1] = nums[N-1];
        for(int i=N-2; i>=0; i--){
            sufmin[i] = min(sufmin[i+1], nums[i]);
        }
        int prefmax = nums[0];
        for(int i=0; i<N; i++){
            prefmax = max(prefmax, nums[i]);
            int instab = prefmax-sufmin[i];
            if(instab <= k){
                return i;
            }
        }
        return -1;
    }
};