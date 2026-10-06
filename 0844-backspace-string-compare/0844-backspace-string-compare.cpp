class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        for(char c:s){
            if(!st1.empty() && c=='#'){
                st1.pop();
            }
            if(c!='#') st1.push(c);
        }
        for(char c:t){
            if(!st2.empty() && c=='#'){
                st2.pop();
            }
            if(c!='#') st2.push(c);
        }
        while(!st1.empty() && !st2.empty()){
            if(st1.top() != st2.top()){
                return false;
            }
            st1.pop(); st2.pop();
        }
        if(!st1.empty() || !st2.empty()){
            return false;
        }
        return true;
    }
};