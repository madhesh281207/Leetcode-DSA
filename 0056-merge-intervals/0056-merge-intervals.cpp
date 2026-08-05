class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(), [](const vector<int>&a,const vector<int>b){
            if(a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0]<b[0];
        });
        vector<vector<int>> ans;
        int r=0;
        while(r < arr.size()){
            int copy = r+1;
            int first=arr[r][0], second=arr[r][1];
            while(copy<arr.size() && second >= arr[copy][0]){
                second = max(second, arr[copy][1]);
                copy++;
            }
            ans.push_back({first,second});
            r = copy;
        }
        return ans;
    }
};