class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int num:nums){
            stack<int> temp;
            while(num>0){
                int t=num%10;
                num/=10;
                temp.push(t);
            }
            while(!temp.empty()){
                ans.push_back(temp.top());
                temp.pop();
            }
        }
        return ans;
    }
};