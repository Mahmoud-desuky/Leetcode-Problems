class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int cnt=0;
        for(auto it:nums)
          {
            if(it!=val)
            {
                nums[cnt++]=it;
            }
          }
        return cnt;
    }
};