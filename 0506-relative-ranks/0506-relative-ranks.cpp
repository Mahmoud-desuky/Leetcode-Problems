class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>v=score;
        sort(v.rbegin(),v.rend());
        map<int,string>mp;
        mp[v[0]]="Gold Medal";
        if(v.size()>1)
            mp[v[1]]="Silver Medal";
        if(v.size()>2)
              mp[v[2]]="Bronze Medal";
        int cnt=4;
        for(int i=3;i<v.size();i++)
           mp[v[i]]=to_string(cnt++);
        vector<string>ans;
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(mp[score[i]]);
        }
        return ans;
    }
};