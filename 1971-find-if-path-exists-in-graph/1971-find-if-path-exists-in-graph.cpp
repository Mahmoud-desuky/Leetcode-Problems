class Solution {
public:
    int vis[2*100000+9];
    vector<int>adj[2*100000+9];
    void dfs(int node)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
                dfs(it);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
      for(auto it:edges){
          int l=it[0],r=it[1];
              adj[l].push_back(r);
             adj[r].push_back(l);
          
      }
        dfs(source);
       
        return (vis[destination]==1);
    }
};