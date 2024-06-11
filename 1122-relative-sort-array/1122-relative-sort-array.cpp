class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto&it:arr1)mp[it]++;
        vector<int>ans;
        for(auto it:arr2)
        {
            int x=mp[it];
            while(x--)ans.push_back(it);
            mp[it]=0;
        }
        for(auto [l,r]:mp)
        {
            
            while (r--)ans.push_back(l);
        }
        return ans;
    }
};