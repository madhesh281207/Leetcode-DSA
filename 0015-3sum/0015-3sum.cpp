class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return {};
        if(nums[0]>0) return {};
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;++i)
        {
            for(int j=i+1;j<nums.size()-1;++j)
            {
                int third=nums[i]+nums[j];
                third=third-(2*third);
                if(mp.count(third) && mp.find(third)->second>j)
                {
                    ans.push_back({nums[i],nums[j],third});
                }
                j=mp.find(nums[j])->second;
                
            }
            i=mp.find(nums[i])->second;
        }
        return ans;
    }
};