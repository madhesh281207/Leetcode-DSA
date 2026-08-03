class Solution {
public:
    int subtractProductAndSum(int n) {
        long long product = 1 ;
        int sum=0;
        while(n!=0){
            int rem = n%10;
            product = product * 1LL *rem;
            sum+=rem;
            n/=10;
        }
        int val = product-sum;
        return val;
    }
};