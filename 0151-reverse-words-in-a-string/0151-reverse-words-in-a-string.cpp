class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int st=0,n=s.length();
        for(int i=0; i<n; i++){
            if(s[i]==' ' || i==n-1){
                if(st<i) reverse(s.begin()+st,s.begin()+i+(i==n-1));
                st=i+1;
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                ans+=s[i];
            }
            else if(i>0 && s[i-1]!=' '){
                ans+=' ';
            }
        }
        if(ans.size() && ans.back()==' ') ans.pop_back();
        return ans;
    }
};