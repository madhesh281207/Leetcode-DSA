class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        int n1=a.length(), n2=b.length();
        if(n1>n2) return n1;
        if(n2>n1) return n2;
        return n1;
    }
};