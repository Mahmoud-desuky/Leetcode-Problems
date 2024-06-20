class Solution {
public:
    bool can(long long md,vector<int>v,int m)
    {
        auto it=v.begin();
        int cnt=0;
        long long sum=0;
        while (it!=v.end())
        {
            it=lower_bound(v.begin(),v.end(),*it+md);
            cnt++;
        }
        return (cnt>=m);
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        long long l=1,r=1e9+9,md,ans=0;
        while(l<=r)
        {
            md=(l+r)/2;
            if(can(md,position,m))
            {
                l=md+1;
                ans=md;
            }else 
                r=md-1;
        }
        return ans;
    }
};