class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp1,mp2;
        string m="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                mp1[m]++;
                m="";
            }else m+=s1[i];
        }
        mp1[m]++;
        m="";
         for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==' ')
            {
                mp2[m]++;
                m="";
            }else m+=s2[i];
        }
        mp2[m]++;
        vector<string>ans;
        for(auto [l,r]:mp1)
        {
           if(r==1)
           {
               if(mp2[l]==0)
                   ans.push_back(l);
           }
        }
         for(auto [l,r]:mp2)
        {
           if(r==1)
           {
               if(mp1[l]==0)
                   ans.push_back(l);
           }
        }
        return ans;
    }
};