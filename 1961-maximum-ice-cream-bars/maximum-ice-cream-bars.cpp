class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        vector<long long>prfx(n+1);
        for(int i=1;i<=n;i++)
        {
            prfx[i]=prfx[i-1]+costs[i-1];
        }
        auto it=upper_bound(prfx.begin(),prfx.end(),coins)-prfx.begin();
        return it-1;
    }
};