class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>frq;
        for(int i:nums)
        {
            if(frq[i]>0) frq[i]+=1;
            else frq[i]=1;
        }
        for(auto const&[num,count]:frq)
        {
            if(count==1) return num ;
        }
        return -1;
    }
};