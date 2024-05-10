class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& a, int k) {
        vector<pair<double,pair<int,int>>>vp;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++)
            {
                vp.push_back({a[i]/double(1.0*a[j]),{i,j}});
            }
        }
        sort(vp.begin(),vp.end());
      
        vector<int>ans;
        ans.push_back(a[vp[k-1].second.first]);
       ans.push_back(a[vp[k-1].second.second]);
        return ans;
    }
};