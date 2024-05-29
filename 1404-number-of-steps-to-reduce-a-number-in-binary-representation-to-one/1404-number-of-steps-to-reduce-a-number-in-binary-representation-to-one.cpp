class Solution {
public:
    int numSteps(string s) {
        int ans=0,c=0;
        for(int i=s.size()-1;i>0;i--)
        {
            if(((s[i]-'0')+c) &1)
            {
                ans+=2;
                c=1;
            }else 
                ans++;
        }
        return ans+c;
    }
};