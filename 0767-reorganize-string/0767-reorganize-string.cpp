class Solution {
public:
    string reorganizeString(string s) {
        vector<int>v(26);
        int mx=0;
        for(auto&c:s){
            v[c-'a']++;
            mx=max(mx,v[c-'a']);
        }
        int x=(s.size()+1)/2;
        if(mx>x)
            return "";
        string ans="";
       priority_queue<pair<int,int>>pq;
        for(int i=0;i<26;i++)
        {
            if(v[i])
                pq.push({v[i],i});
        }
        while(!pq.empty())
        {
            auto[a,b]=pq.top();
            pq.pop();
            a--;
            ans+=char(b+'a');
            if(!pq.empty())
            {
                auto[x,y]=pq.top();
                pq.pop();
                x--;
                ans+=char(y+'a');
                if(x)
                    pq.push({x,y});
            }
            if(a)
                pq.push({a,b});
        }
        return ans;
    }
};