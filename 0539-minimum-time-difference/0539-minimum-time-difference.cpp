class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>v;
        for(auto it:timePoints)
        {
            string s=it;
            int h=(s[0]-'0');
            h=h*10+(s[1]-'0');
            int m=(s[3]-'0');
            m=m*10+(s[4]-'0');
            v.push_back(h*60+m);
        }
        sort(v.begin(),v.end());
        int ans=10000;
        for(int i=1;i<v.size();i++)
            ans=min(ans,v[i]-v[i-1]);
        
        return min(ans,24*60-v[v.size()-1]+v[0]);
    }
};