class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long ans=0;
            for(int i=0;i<n/2;i++)
               {
                if(nums[i]>k){
                    ans+=(nums[i]-k);
                    nums[i]=k;
                }
              }
            for(int i=n/2;i<n;i++)
            {
                if(nums[i]<k)
                {
                    ans+=(k-nums[i]);
                    nums[i]=k;
                }
            }           
                ans+=abs(nums[n/2]-k);        
            return ans;
      
    }
};