class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> g;
        for(auto e:edges){
            int u=e[0], v=e[1];
            g[u].push_back(v);
            g[v].push_back(u);
        }
        queue<int> q;
        q.push(source);
        set<int> st;
        st.insert(source);
        while(!q.empty()){
            int top=q.front(); q.pop();
            if(top == destination) return true;
            for(int next:g[top]){
                if(st.find(next)==st.end()){
                    st.insert(next); q.push(next);
                }
            }
        }
        return false;
    }
};