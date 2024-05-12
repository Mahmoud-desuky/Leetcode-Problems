class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int>mp;
        for(auto it:arr)mp[it]++;
        set<int>st;
        for(auto[l,r]:mp)st.insert(r);
        return (st.size()==mp.size());
    }
};