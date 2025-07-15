class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
            if(mp[it]<=2)
            {
                nums[cnt++]=it;
            }
        }
        return cnt;
    }
};