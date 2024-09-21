class Solution {
public:
    vector<int>ans;
    int x;
    map<int,int>mp;
    // i i*10 i*10 i*10  
    void dfs(int i)
    {
       if(i>x)
           return;
        if(i<=x&&mp[i]==0)
        {
            mp[i]=1;
            ans.push_back(i);
        }
        
        dfs(i*10);
       
        
        
    }
    vector<int> lexicalOrder(int n) {
      vector<string>temp;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            temp.push_back(to_string(i));
        }
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<temp.size();i++)
        {
            v.push_back(stoi(temp[i]));
        }
        return v;
    }
};