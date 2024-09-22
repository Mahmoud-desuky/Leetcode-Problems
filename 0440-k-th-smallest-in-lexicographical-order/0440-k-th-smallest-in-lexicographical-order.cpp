class Solution {
public:
    int solve(long long n,long long cur,long long nx)
    {
        int dif=0;
        while(cur<=n)
        {
            dif+=(min(n+1,nx)-cur);
            cur*=10;
            nx*=10;
        }
        return dif;
    }
    int findKthNumber(int n, int k) {
      int cur=1;
        k--;
        while(k)
        {
            int cnt=solve(n,cur,cur+1);
            if(cnt<=k)
                k-=cnt,cur++;
            else 
                cur*=10,k--;
        }
        return cur;
    }
};