class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        vector<int>ans;
        while(mn<mx){
            if(st.find(mn) == st.end()){
                ans.push_back(mn);
            }
            mn++;
        }
        return ans;
    }
};