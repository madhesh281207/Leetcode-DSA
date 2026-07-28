class Solution {
    vector<int>parent;
    vector<int>rank;
public:
    int findParent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node]=findParent(parent[node]);
    }
    void joinParent(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);
        if(pu==pv) return;
        if(rank[pu]<rank[pv]){
            parent[pu]=pv;
        }else if(rank[pu]>rank[pv]){
            parent[pv]=pu;
        }else{
            parent[pv]=pu;
            pu++;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N=isConnected.size();
        parent.resize(N+1);
        rank.resize(N+1,0);
        for(int i=0;i<=N;i++){
            parent[i]=i;
        }
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(isConnected[i][j]==1){
                        joinParent(i,j);
                }
            }
        }
        unordered_set<int>st;
        for(int i=0 ; i<N ; i++){
            st.insert(findParent(i));
        }
        return st.size();

    }
};