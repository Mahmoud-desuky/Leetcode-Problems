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
       vector<int>v(1000009);
        for(auto a:intervals)
        {
            v[a[0]]++;
            v[a[1]+1]--;
        }
        for(int i=1;i<1000009;i++)
            v[i]+=v[i-1];
        return *max_element(v.begin(),v.end());
    }
};