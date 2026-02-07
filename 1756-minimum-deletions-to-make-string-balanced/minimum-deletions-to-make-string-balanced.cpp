class Solution {
public:
    int minimumDeletions(string s) {
         int n=s.size();
         vector<int>pr(n+2),su(n+3);
         for(int i=0;i<n;i++)
         {
            pr[i+1]=(s[i]=='a');
            pr[i+1]+=pr[i];
         }
         for(int i=n-1;i>=0;i--)
         {
            su[i+1]=(s[i]=='b');
            su[i+1]+=su[i+2];
         }
         int ans=0;
         for(int i=0;i<n+2;i++)
            ans=max(ans,pr[i]+su[i+1]);
         
         
         return n-ans;
    }
};