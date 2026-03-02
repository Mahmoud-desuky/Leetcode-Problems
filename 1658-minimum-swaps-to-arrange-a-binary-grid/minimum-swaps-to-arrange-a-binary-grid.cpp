class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
       
        int n=grid.size();
        vector<int>p(n);
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(grid[i][j]==1)
                {
                   p[i]=j;
                    break;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int k=-1;
            for(int j=i;j<n;j++)
            {
                if(p[j]<=i)
                {
                    ans+=(j-i);
                    k=j;
                    break;
                }
            }
            if(k==-1)
            return -1;
            else 
            {
                for(int j=k;j>i;j--)
                {
                    swap(p[j],p[j-1]);
                }
            }
        }
       return ans;

    }
};