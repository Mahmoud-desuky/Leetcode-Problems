class Solution {
public:
    int minimumDeletions(string s) {
       int n=s.size();
        vector<int>a(n+2),b(n+2);
        for(int i=0;i<n;i++)
        {
            a[i+1]=(s[i]=='a');
            b[i+1]=(s[i]=='b');
            
        }
        for(int i=1;i<=n;i++){
            a[i]+=a[i-1];
            b[i]+=b[i-1];
        }
      
        int mn=n;
        for(int i=1;i<=n;i++)
        {
           
            mn=min(b[i-1]+(a[n]-a[i]),mn);
        }
        return mn;
    }
};