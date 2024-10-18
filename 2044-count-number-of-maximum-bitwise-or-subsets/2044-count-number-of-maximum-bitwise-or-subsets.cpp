class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int ans=0;
        for(auto it:nums)ans|=it;
        
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            bitset<32>b(i);
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(b[j])sum|=nums[j];
            }
            if(sum==ans)cnt++;
        }
        return cnt;
    }
};