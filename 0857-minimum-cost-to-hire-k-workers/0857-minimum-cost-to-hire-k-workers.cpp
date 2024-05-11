class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double,int>>v;
        for(int i=0;i<quality.size();i++)
        {
            v.push_back({wage[i]/(1.0*quality[i]),quality[i]});
        }
        sort(v.begin(),v.end());
        double mn=1e9;
        double sum=0;
         priority_queue<int>pq;
        for(int i=0;i<v.size();i++)
        {
            pq.push(v[i].second);
            sum+=v[i].second;
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            if(pq.size()==k)
            {
                mn=min(mn,sum*v[i].first);
            }
        }
            return mn;
    }
};