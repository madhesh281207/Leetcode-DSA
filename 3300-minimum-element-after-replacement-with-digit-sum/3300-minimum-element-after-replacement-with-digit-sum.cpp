class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int t=0, temp=nums[i];
            while(temp>0){
                t+=temp%10;
                temp/=10;
            }
            nums[i]=t;
        }
        return *min_element(nums.begin(), nums.end());
    }
};