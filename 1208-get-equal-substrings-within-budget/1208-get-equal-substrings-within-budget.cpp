class Solution {
public:
    bool can(int md,string s,string t,int mx){
        int sum=0;
        for(int i=0;i<md;i++)
        {
            sum+=abs(s[i]-t[i]);
        }
        if(sum<=mx)return true;
        for(int i=md,j=0;i<s.size();i++,j++)
        {
            sum-=abs(s[j]-t[j]);
            sum+=abs(s[i]-t[i]);
           if(sum<=mx)return true;
        }
        return false;
        
    }
    int equalSubstring(string s, string t, int maxCost) {
        int l=0,r=s.size(),md,ans=0;
        while(l<=r)
        {
            md=(l+r)/2;
            if(can(md,s,t,maxCost))
            {
                ans=md;
                l=md+1;
            }else 
                r=md-1;
        }
        return ans;
    }
};