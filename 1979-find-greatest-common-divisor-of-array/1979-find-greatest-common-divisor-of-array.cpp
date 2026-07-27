class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i>=1;i--)
        {
            if(nums[0]%i==0 && nums[n-1]%i==0)
            {
                return i;
            }
        }
        return 0;
    }
};