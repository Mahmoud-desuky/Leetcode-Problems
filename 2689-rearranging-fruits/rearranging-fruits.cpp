class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        map<int,int>mp,a,b;
        long long mn=LLONG_MAX;
        for(auto it:basket1){
            mp[it]++;
            a[it]++;
            mn=min(mn,(long long)it);
        }

        for(auto it:basket2)
        {          
             mn=min(mn,(long long)it);
            mp[it]++;
            b[it]++;
        }
        vector<long long>v;

        for(auto [l,r]:mp)
        {
            if(r&1)
                return -1;
            int x=r/2;
            while(x>a[l])
            {
                v.push_back(l);
                a[l]++;
            }
            while(x>b[l])
            {
                v.push_back(l);
                b[l]++;
            }
        }

        long long ans=0;
        
        for(int i=0;i<v.size()/2;i++)
        {
            ans+=min(v[i],2*mn);
        }
       return ans;

    }
};