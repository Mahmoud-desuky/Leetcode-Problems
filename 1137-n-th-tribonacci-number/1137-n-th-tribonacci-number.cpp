class Solution {
public:
    int dp[55];
    
    int solve(int n)
    {
        if(n<2)
            return n;
        if(n==2)
            return 1;
        int &ret=dp[n];
        if(~ret)
            return ret;
        ret=solve(n-1)+solve(n-2)+solve(n-3);
        return ret;
    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};