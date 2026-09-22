class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0; i<s.length();  i++){
            int count=abs(s[i]-'z')+1;
            count*=(i+1);
            sum+=count;
        }
        return sum;
    }
};