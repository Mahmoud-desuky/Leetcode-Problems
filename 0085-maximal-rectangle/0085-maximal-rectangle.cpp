class Solution {
public:
    int solve(vector<int>&v)
    {
        stack<int>st;
        int n=v.size();
               int mx=0,cur=0;
               for(int i=0;i<n;i++)
               {
                   while(!st.empty()&&v[st.top()]>v[i])
                   {
                       int x=st.top();
                       st.pop();
                       if(st.empty())
                        cur=v[x]*i;
                       else
                        cur=v[x]*(i-(st.top()+1));
                       mx=max(mx,cur);
                   }
                   st.push(i);
               }
               while(!st.empty())
               {
                    int x=st.top();
                       st.pop();
                       if(st.empty())
                        cur=v[x]*n;
                       else
                        cur=v[x]*(n-(st.top()+1));
                       mx=max(mx,cur);
               }
        return mx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int>h(m);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1')
                    h[j]++;
                else 
                    h[j]=0;
            }
            int cur=solve(h);
            ans=max(ans,cur);
        }
        return ans;
    }
};