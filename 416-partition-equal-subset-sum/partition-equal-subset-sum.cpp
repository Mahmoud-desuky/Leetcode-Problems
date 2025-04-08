class Solution {
public:
int sum=0;
int dp[205][20005];
bool solve(int i,int sumGroup,vector<int>& nums)
{
    if(i>=nums.size())
    {
        return (sumGroup==sum/2);
    }
    auto &ret=dp[i][sumGroup];
    if(ret!=-1)
      return ret;
    ret=solve(i+1,sumGroup,nums);
    ret|=solve(i+1,sumGroup+nums[i],nums);

    return ret;
}
    bool canPartition(vector<int>& nums) {
        for(auto it:nums)sum+=it;

        if(sum&1)return false;

        memset(dp,-1,sizeof dp);
        return solve(0,0,nums);

    }
};