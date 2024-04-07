class Solution {
public:
    bool isPowerOfTwo(long long n) {
       if((n&(n-1))==0&&n)
           return true;
        return false;
    }
};