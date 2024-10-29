class Solution {
public:
    int dp[1009][1009];
    bool valid(int i,int j,vector<vector<int>>& g)
    {
        return(i>=0&&i<g.size()&&j>=0&&j<g[0].size());
    }
    int solve(int i,int j,vector<vector<int>>& g)
    {
       
        int &ret=dp[i][j];
        if(~ret)
            return ret;
        ret=0;
        if(valid(i-1,j+1,g)&&g[i-1][j+1]>g[i][j])
            ret=max(ret,solve(i-1,j+1,g)+1);
         if(valid(i,j+1,g)&&g[i][j+1]>g[i][j])
            ret=max(ret,solve(i,j+1,g)+1); 
        if(valid(i+1,j+1,g)&&g[i+1][j+1]>g[i][j])
            ret=max(ret,solve(i+1,j+1,g)+1);
        return ret;
    } 
    int maxMoves(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof dp);
        int mx=0;
        for(int i=0;i<grid.size();i++)
        {
            mx=max(mx,solve(i,0,grid));
        }
        return mx;
    }
};