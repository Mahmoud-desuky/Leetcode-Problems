class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int ans=1,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==mx)cnt++;
            else cnt=0;
            ans=max(ans,cnt);
        }
        return ans;
    }
};