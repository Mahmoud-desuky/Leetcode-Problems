class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<m;j++)
                    grid[i][j]=1-grid[i][j];
            }
        }
     
        for(int i=1;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++)
                cnt+=(grid[j][i]==0);
           
            if(cnt>n-cnt)
            {
                for(int j=0;j<n;j++)
                   grid[j][i]=1-grid[j][i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    sum+=(1<<(m-j-1));
                }
            }
        }
        return sum;
    }
};