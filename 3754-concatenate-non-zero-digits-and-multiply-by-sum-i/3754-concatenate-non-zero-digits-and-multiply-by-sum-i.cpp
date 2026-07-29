class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        stack<long long>q;
        while(n>0){
            long long temp=n%10;
            if(temp!=0){
                q.push(temp);
                sum+=temp;
            }
            n/=10;
        }
        long long ans=0;
        while(!q.empty()){
            long long temp=q.top();
            ans=(ans*10)+temp;
            q.pop();
        }
        return ans*sum;
    }
};