class Solution {
public:
    int maxDepth(string s) {
        int ans=0, count=0;
        for(char c:s){
            if(c=='(') count++;
            if(c==')') count--;
            ans=max(ans,count);
        }
        return ans;
    }
};