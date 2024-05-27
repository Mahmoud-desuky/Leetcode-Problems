class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            int cnt=0;
            for(auto it:nums)
            {
                if(it>=i)
                    cnt++;
            }
            if(cnt==i)
                return i;
        }
        return -1;
    }
};