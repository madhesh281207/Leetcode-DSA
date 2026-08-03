class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int> pq;
        for(int i:arr) pq.push(i);
        while(pq.size()>1){
            int l=pq.top(); pq.pop();
            int r=pq.top(); pq.pop();
            if(l == r) continue;
            pq.push(l-r);
        }
        return pq.empty()? 0:pq.top();
    }
};