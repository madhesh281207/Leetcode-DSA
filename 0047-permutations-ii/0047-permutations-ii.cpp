class Solution {
public:
    vector<vector<int>> ans;
    map<vector<int>,int> mp;
    void solve(vector<int>& nums, int i){
        if(i == nums.size()) {
            if(mp.find(nums) == mp.end()){
                ans.push_back(nums);
                mp[nums]=1;
            }
        }
        for(int j=i; j<nums.size(); j++){
            swap(nums[i],nums[j]);
            solve(nums,i+1);
            swap(nums[i],nums[j]);
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};