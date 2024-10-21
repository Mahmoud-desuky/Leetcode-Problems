class Solution {
public:
    int ans=0;
    void solve(string s,int i,set<string>st,int cnt)
    {
        if(i==s.size())
        {
            ans=max(ans,cnt);
            return;
        }
        string m="";
        for(int j=i;j<s.size();j++)
        {
            m+=s[j];
            if(st.find(m)==st.end())
            {
                st.insert(m);
                solve(s,j+1,st,cnt+1);
                st.erase(m);
            }
        }
    }
    int maxUniqueSplit(string s) {
       set<string>st;
        solve(s,0,st,0);
        return ans;
        
    }
};