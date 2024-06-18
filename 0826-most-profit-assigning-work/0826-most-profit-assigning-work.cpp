class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>vp;
        for(int i=0;i<difficulty.size();i++)
        {
            vp.push_back({difficulty[i],profit[i]});
        }
        sort (vp.begin(),vp.end());
        vector <int>pr(profit.size());
        pr[0]=vp[0].second;
        for(int i=1;i<profit.size();i++)
          pr[i]=max(pr[i-1],vp[i].second);
        int ans=0;
        for(auto it:worker)
        {
            auto ot=upper_bound (vp.begin(),vp.end(),make_pair(it,100009))-vp.begin();
            if(ot==0)
                continue;
            --ot;
            cout<<pr[ot]<<" ";
           ans+=pr[ot];
        }
        return ans;
    }
};