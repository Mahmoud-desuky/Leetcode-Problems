class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            vector<int>v;
            for(int j=0;j<n-2;j++)
            {
                int mx=0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++)
                        mx=max(mx,grid[k][l]);
                }
                v.push_back(mx);
            }
            ans.push_back(v);
        }
        return ans;
    }
};