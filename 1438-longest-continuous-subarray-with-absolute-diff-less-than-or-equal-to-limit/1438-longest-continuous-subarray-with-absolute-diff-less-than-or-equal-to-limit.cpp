class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
         multiset<int>ms;
        int i=0,j=0,mx=0;
        while(i<nums.size())
        {
            ms.insert(nums[i++]);
            while(*ms.rbegin()-*ms.begin()>limit)
            {
                ms.erase(ms.find(nums[j++]));
            }
            mx=max(mx,(int)ms.size());
        }
        return mx;
    }
};