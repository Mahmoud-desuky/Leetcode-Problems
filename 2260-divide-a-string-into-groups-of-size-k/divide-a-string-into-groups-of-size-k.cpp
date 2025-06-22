class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int i=0;
        string sub="";
        while(i<s.size())
        {
            sub+=s[i++];
            if(i%k==0)
            {
                ans.push_back(sub);
                sub="";
            }
        }
        while(i%k!=0)
        {
            sub+=fill;
            i++;
        }
        if(sub!="")
        ans.push_back(sub);
        return ans;
    }
};