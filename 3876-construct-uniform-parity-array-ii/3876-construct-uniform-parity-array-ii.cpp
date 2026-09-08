class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int evencnt=0,oddcnt=0,mineven=1000000,minodd=1000000;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2 == 0){
                evencnt++;
                mineven = min(mineven,nums1[i]);
            }else{
                oddcnt++;
                minodd = min(minodd,nums1[i]);
            }
        }
        if(evencnt==0 || oddcnt==0) return true;
        if(mineven < minodd) return false;
        return true;
    }
};