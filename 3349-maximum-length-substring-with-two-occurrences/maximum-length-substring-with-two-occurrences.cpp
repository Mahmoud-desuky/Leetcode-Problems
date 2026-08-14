class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0,cnt=0,mx=0,n=s.size();
        vector<int>frq(26);
        while(r<n)
        {
            frq[s[r]-'a']++;
            while(frq[s[r]-'a']>2)
            {
                frq[s[l++]-'a']--;
            }
            r++;
            mx=max(mx,r-l);
        }
        return mx;
    }
};