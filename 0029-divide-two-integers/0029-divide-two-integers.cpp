class Solution {
public:
    long divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor== -1) return INT_MAX;
        return long(dividend/divisor);
    }
};