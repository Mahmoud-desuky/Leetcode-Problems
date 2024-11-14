class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        int mx=0;
        for(auto it:items)
        {
            if(it[0]==items[0][0])
                mx=max(mx,it[1]);
        }
        int n=items.size();
        vector<int>ans(n);
        items[0][1]=mx;
        ans[0]=items[0][0];
        for(int i=1;i<n;i++)
        {
            items[i][1]=max(items[i-1][1],items[i][1]);
            ans[i]=items[i][0];
        }
        vector<int>ans2;
        for(auto ot:queries)
        {
            auto it=upper_bound(ans.begin(),ans.end(),ot)-ans.begin();
            
            if(it==0)
                ans2.push_back(0);
            else if(it==n)
                ans2.push_back(items[n-1][1]);
            else 
            {
                
                ans2.push_back(items[it-1][1]);
            }
        }
        return ans2;
    }
};