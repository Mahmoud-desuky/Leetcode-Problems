class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        vector<int>ans;
        vector<pair<int,int>>p;
        for(auto [l,r]:mp)
        {
            p.push_back({r,l});    
        }
        sort(p.rbegin(),p.rend());
        for(int i=0;i<k;i++)
            ans.push_back(p[i].second);
        return ans;
        
        
    }
};