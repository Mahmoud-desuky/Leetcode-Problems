class Solution {
  int solve(string ring,string key,int i,int j,int n){
        if(j==key.size())
            return 0;
        int&ret=dp[i][j];
        if(~ret)
            return ret;

      ret=INT_MAX;
        for(int a=0;a<n;a++){
            if(ring[a]==key[j]){
                int ts= min(abs(a-i),n-abs(a-i))+1+solve(ring,key,a,j+1,n);
                ret=min(ret,ts);
            }
        }
        return ret;
    }
public:
    int dp[101][101];
    int findRotateSteps(string ring, string key) {
        memset(dp,-1,sizeof(dp));
        int n=ring.size();
        return solve(ring,key,0,0,n);
       
    }
};