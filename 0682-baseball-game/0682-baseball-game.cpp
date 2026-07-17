class Solution {
public:
    int calPoints(vector<string>& str) {
        stack<int>st;
        if(str.size()==1)
        {
            return stoi(str[0]);
        }
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=="C")
            {
                st.pop();
            }else if(str[i]=="D")
            {
                st.push(st.top()*2);
            }else if(str[i]=="+")
            {
                int temp=st.top();
                st.pop();
                int temp2=st.top();
                st.push(temp);
                st.push(temp+temp2);
            }else{
                st.push(stoi(str[i]));
            }
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};