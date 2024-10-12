class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
       /* multiset<pair<int,int>>ms;
        for(int i=0;i<intervals.size();i++)
        {
            ms.insert({intervals[i][0],intervals[i][1]});
        }
        int ans=0;
        while(ms.size())
        {
            pair<int,int>p=*ms.begin();
            ms.erase(ms.begin());
            auto it=ms.upper_bound({p.second,0});
            while(it!=ms.end())
            {
                p=*it;
                ms.erase(it);
                it=ms.upper_bound({p.second,0});
            }
            ans++;
        }*/
        map<int,int>mp;
        int ans=0,cnt=0;
        for(auto it:intervals)
        {  
            mp[it[0]]++;
            mp[it[1]+1]--;
        }
        for(auto[l,r]:mp)
        {
            cnt+=r;
            ans=max(ans,cnt);
        }
        return ans;
    }
};