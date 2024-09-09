class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int sum=0,ans=-1e4;
        for(auto it:nums)
        {
            if(sum<0)
                sum=0;
            sum+=it;
            ans=max(ans,sum);
        }
        return ans;
    }
};