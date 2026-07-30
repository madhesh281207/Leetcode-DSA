class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            ans.push_back(max(nums[i],nums[i+1]));
            ans.push_back(min(nums[i],nums[i+1]));
        }
        return ans;
    }
};