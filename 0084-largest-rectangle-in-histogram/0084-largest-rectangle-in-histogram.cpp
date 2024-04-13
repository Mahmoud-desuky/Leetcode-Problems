class Solution {
public:
    
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
               int mx=0,cur=0;
        int n=heights.size();
               for(int i=0;i<n;i++)
               {
                   while(!st.empty()&&heights[st.top()]>heights[i])
                   {
                       int x=st.top();
                       st.pop();
                       if(st.empty())
                        cur=heights[x]*i;
                       else
                        cur=heights[x]*(i-(st.top()+1));
                       mx=max(mx,cur);
                   }
                   st.push(i);
               }
               while(!st.empty())
               {
                    int x=st.top();
                       st.pop();
                       if(st.empty())
                        cur=heights[x]*n;
                       else
                        cur=heights[x]*(n-(st.top()+1));
                       mx=max(mx,cur);
               }
               return mx;
    }
};