class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        if(n<1000000)  return n-999;
        if(n<1000000000)  return 999000+(n-999999)*2;
        if(n<1000000000000LL)  return 999000+999000000*2+(n-999999999)*3;
        if(n<1000000000000000LL)  return 999000+999000000*2+999000000000LL*3+(n-999999999999)*4;
        if(n<1000000000000000000LL)  return 999000+999000000*2+999000000000LL*3+999000000000000LL*4+(n-999999999999999)*5;
        return 0;
    }
};