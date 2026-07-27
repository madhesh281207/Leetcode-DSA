class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=1,even=2,sum1=1,sum2=2;
        for(int i=0;i<n-1;i++)
        {
            odd+=2;
            even+=2;
            sum1+=odd;
            sum2+=even;
        }
        cout<<odd<<even;
        return gcd(sum1,sum2);
    }
};