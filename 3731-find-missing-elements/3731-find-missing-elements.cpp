class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int beg=nums[0];
        int end=nums.back();
        set<int> st(nums.begin(),nums.end());
        for(int i=beg+1;i<end;i++){
            if(st.count(i) == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};