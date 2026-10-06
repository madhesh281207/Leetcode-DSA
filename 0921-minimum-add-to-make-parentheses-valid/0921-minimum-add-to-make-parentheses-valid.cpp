class Solution {
public:
    int minAddToMakeValid(string s) {
        int ct1=0,ct2=0;
        for(char c:s){
            if(c=='(') ct1++;
            else{
                if(ct1>0) ct1--;
                else ct2++;
            }
        }
        return ct1+ct2;
    }
};