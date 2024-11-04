class Solution {
public:
    string compressedString(string word) {
        vector<pair<int,char>>vp;
        int cnt=1;
        for(int i=1;i<word.size();i++)
        {
            if(word[i]!=word[i-1]||cnt==9)
            {
                vp.push_back({cnt,word[i-1]});
                cnt=1;
            }else cnt++;
        }
        vp.push_back({cnt,word.back()});
        string ans="";
     for(auto i=0;i<vp.size();i++)
        {
            ans+=char(vp[i].first+'0');
            ans+=char(vp[i].second);
        }
        
        return ans;
    }
};