class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto c:s)
            mp[c]++;
        int cnt=0;
        for(auto it:mp)
        {
            if(it.second%2!=0)
                cnt++;
        }
        int ans=s.size();
        if(cnt)
        {
            ans-=cnt;
            ans++;
        }
        return ans;
    }
};