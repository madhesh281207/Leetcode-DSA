class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int mn=101,mx=0;
        bitset<101> st=0;
        for(int i : nums){
            st[i]=1;
            mn=min(i,mn);
            mx=max(i,mx);
        }
        for(int i=mn+1;i<mx;i++){
            if(!st[i]) ans.push_back(i);
        }
        return ans;
    }
};