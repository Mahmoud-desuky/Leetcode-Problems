class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string a=string(1,s1[0])+string(1,s1[2]);
        string b=string(1,s2[0])+string(1,s2[2]);
        string c=string(1,s1[1])+string(1,s1[3]);
        string d=string(1,s2[1])+string(1,s2[3]);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        return (a==b&&c==d);
    }
};