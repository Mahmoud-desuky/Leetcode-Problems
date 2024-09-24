class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<string,int>mp;
        int mx=0;
        for(auto it:arr1)
        {
            string s=to_string(it);
            string m="";
            for(auto c:s)
            {
                m+=c;
                mp[m]=1;
            }
        }
        for(auto it:arr2)
        {
            string s=to_string(it);
            string m="";
            for(auto c:s)
            {
                m+=c;
                if(mp[m]==1)
                {
                    mx=max(mx,(int)m.size());
                }
            }
        }
        return mx;
        
    }
};