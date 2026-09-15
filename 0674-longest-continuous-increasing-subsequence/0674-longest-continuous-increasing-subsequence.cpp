class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxcount=1,count=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]>nums[i]){
                count++;
            }else{
                maxcount=max(maxcount,count);
                count=1;
            }
        }
        maxcount=max(maxcount,count);
        return maxcount;
    }
};