class Solution {
public:
    int n,m;
    int mx=0;
    void dfs(vector<vector<int>>&v,int i,int j,vector<vector<int>>&vis,int sum)
    {
        if(i<0||i>=n||j<0||j>=m||v[i][j]==0||vis[i][j])
            return;
        sum+=v[i][j];
        mx=max(mx,sum);
        vis[i][j]=1;
        dfs(v,i+1,j,vis,sum);
        dfs(v,i-1,j,vis,sum);
        dfs(v,i,j+1,vis,sum);
        dfs(v,i,j-1,vis,sum);
        vis[i][j]=0;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                    dfs(grid,i,j,vis,0);
            }
        }
        return mx;
    }
};