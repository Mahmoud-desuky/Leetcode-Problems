class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mn=100005,mx=0;
        for(auto it:prices)
        {
            if(it<mn)
            {
               mn=it;
               mx=it; 
            }
            mx=max(mx,it);
            ans=max(ans,mx-mn);
        }
        return ans;
    }
};