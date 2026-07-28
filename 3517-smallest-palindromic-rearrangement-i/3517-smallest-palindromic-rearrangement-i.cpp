class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>frq(26,0);
        for(char c:s){
            frq[c-'a']++;
        }
        int N=s.size();
        int l=0,r=N-1;
        string ans(N,' ');
        for(int i=0;i<26;i++){
            while(frq[i]>=2){
                ans[l]=char('a'+i);
                ans[r]=char('a'+i);
                l++;
                r--;
                frq[i]-=2;
            }
            if(frq[i]==1){
                ans[N/2]=char('a'+i);
            }
        }
        return ans;
    }
};