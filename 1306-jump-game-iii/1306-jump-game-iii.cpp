class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int N = arr.size();
        queue<int> q;
        vector<bool> vis(N,false);
        vis[start] = true;
        q.push(start);
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            if(arr[it] == 0){
                return true;
            }
            int forward = it + arr[it];
            int backward = it - arr[it];
            if(forward<N && !vis[forward]){
                vis[forward] = true;
                q.push(forward);
            }
            if(backward >= 0 && !vis[backward]){
                vis[backward] = true;
                q.push(backward);
            }
        }
        return false;
    }
};