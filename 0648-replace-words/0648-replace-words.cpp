class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        map<string,bool>mp;
        for(auto s:dictionary)mp[s]=1;
        
        vector <string>v;
        string m="";
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                v.push_back(m);
                m="";
            }else 
                m+=sentence[i];
        }
        v.push_back(m);
        
        for(int i=0;i<v.size();i++)
        {
            string x="";
            for(int j=0;j<v[i].size();j++)
            {
                x+=v[i][j];
                if(mp[x]==1)break;
            }
            v[i]=x;
        }
        string ans="";
        ans+=v[0];
        for(int i=1;i<v.size();i++)
        {
            ans+=" ";
            ans+=v[i];
        }
        return ans;
    }
};