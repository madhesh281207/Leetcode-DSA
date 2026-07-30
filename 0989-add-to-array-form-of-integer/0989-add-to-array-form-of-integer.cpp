class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int N=num.size();
        for(int i=N-1;i>=0;i--){
            num[i]+=k;
            k=num[i]/10;
            num[i]%=10;
        }
        while(k>0){
            num.insert(num.begin(),k%10);
            k/=10;
        }
        return num;
    }
};