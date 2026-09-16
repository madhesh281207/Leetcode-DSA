class Solution {
public:
    bool check(string &s,int lt,int rt){
        while(lt<rt){
            if(s[lt]!=s[rt]) return false;
            lt++;
            rt--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n=s.length();
        int lt=0,rt=n-1;
        while(lt<rt){
            if(s[lt]!=s[rt]){
                return check(s,lt+1,rt) || check(s,lt,rt-1);
            }
            lt++;
            rt--;
        }
        return true;
    }
};