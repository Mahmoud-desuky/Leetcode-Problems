class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>frq(26);
        int a=0,b=0;
        for(auto c:s)
        {
            frq[c-'a']++;
            if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o')
            {
                a=max(a,frq[c-'a']);
            }
            else 
            {
                b=max(b,frq[c-'a']);
            }
        }
        return a+b;
    }
};