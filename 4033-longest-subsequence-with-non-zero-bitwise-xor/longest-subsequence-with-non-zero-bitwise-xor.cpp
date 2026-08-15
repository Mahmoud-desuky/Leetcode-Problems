class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        map<int,int>mp;
       long long xo=nums[0];
       mp[nums[0]]++;
       for(int i=1;i<nums.size();i++)
           {
            xo^=nums[i];
            mp[nums[i]]++;
           }
       if(mp[0]==nums.size())
       return 0;
        return (xo==0)?nums.size()-1:nums.size();
    }
};