class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st;
        int count=0;
        for(int v:candyType){
            if(st.find(v) == st.end()){
                count++;
            }
            st.insert(v);
        }
        int n=candyType.size();
        return min(count, n/2);
    }
};