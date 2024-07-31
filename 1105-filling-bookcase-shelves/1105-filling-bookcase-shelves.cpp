class Solution {
public:
    int dp[1009];
    int solve(int i,vector<vector<int>>& v, int s)
    {
        if(i>=v.size())
            return 0;
        int &ret=dp[i];
        if(~ret)
            return ret;
        ret=INT_MAX;
        int tw=0,mxh=0;
        for(int j=i;j<v.size();j++)
        {
            tw+=v[j][0];
            mxh=max(mxh,v[j][1]);
            if(tw>s)
                break;
            ret=min(ret,mxh+solve(j+1,v,s));
        }
        return ret;
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        memset(dp,-1,sizeof dp);
        return solve(0,books,shelfWidth);
    }
};