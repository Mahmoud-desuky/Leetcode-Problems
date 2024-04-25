class Solution {
public:
    int dp[100009][27];
    int solve(int i,int l,int k,string s)
    {
        if(i>=s.size())
            return 0;
        int &ret=dp[i][l];
        if(~ret)
            return ret;
        ret=solve(i+1,l,k,s);
        if(l==26)
          ret=max(ret,solve(i+1,s[i]-'a',k,s)+1);
        else if(abs((s[i]-'a')-l)<=k)
        {
            
            ret=max(ret,solve(i+1,s[i]-'a',k,s)+1);
        }
        return ret;
    }
    int longestIdealString(string s, int k) {
         vector<int> dp(150,0);
            int ans=0;
            for(auto &i:s){
                for(int j=i-k;j<=i+k;j++){
                    dp[i]=max(dp[i],dp[j]);
                }
                ans=max(ans,++dp[i]);
            }
        return ans;
     }
};