class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    ans+=4;
                    if(i>0&&grid[i-1][j])ans-=2;
                    if(j>0&&grid[i][j-1])ans-=2;
                }
            }
        }
        return ans;
    }
};