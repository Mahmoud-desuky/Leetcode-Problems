class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
          int n=grid.size();
        vector<vector<int>>dp=grid;
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
               int l=INT_MAX;
               for(int k=0;k<n;k++){
                if(k==j)continue;
                 l=min(l,dp[i+1][k]);
               }
               dp[i][j]+=l;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
            ans=min(ans,dp[0][i]);
         return ans;
    }
};