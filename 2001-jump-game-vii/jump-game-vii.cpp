#include <bits/stdc++.h>
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        vector<int>v(s.size()+1);
        int n=s.size();
        if(s[n-1]=='1')
            return false;
        int f=0,b=0;
        v[b++]=0;
        int i=0;
        for(int j=0;f<b;j=max(j,i+maxJump))
        {
            i=v[f++];
            int j0=max(j+1, i+minJump), jM=min(i+maxJump, n-1);
            for(int k=j0;k<=jM;k++)
            {
                if(s[k]=='0')
                {
                    if(k==n-1)
                    return 1;
                    v[b++]=k;
                }
            }
        }
        return false;
     }
};