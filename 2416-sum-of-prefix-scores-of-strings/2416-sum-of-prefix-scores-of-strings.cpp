 struct Trie{
        Trie* child[26]={};
        int cnt=0;
    };
class Solution {
    Trie root;
public:
   
    void insert(string&s)
    {
        auto cur= &root;
        for(auto c:s)
        {
            if(!cur->child[c-'a'])
            {
               
                cur->child[c-'a']=new Trie();
            }
            cur->child[c-'a']->cnt++;
            cur=cur->child[c-'a'];
        }
    }
    int count(string&s)
    {
         auto cur=&root;
         int ans=0;
        for(auto c:s)
            {
                ans+=cur->child[c-'a']->cnt;
                cur=cur->child[c-'a'];
            }
        return ans;
        
    }
    
    vector<int> sumPrefixScores(vector<string>& words) {
        for(auto s:words)
            insert(s);
        vector<int>ans;
        for(auto s:words)
            ans.push_back(count(s));
        return ans;
    }
};