class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n!=0){
            int temp=n,dprod=1;
            while(temp!=0){
                dprod=dprod*(temp%10);
                temp/=10;
            }    
            if(dprod%t==0){
                return n;
            }
            n++;
        }
        return 0;
    }
};