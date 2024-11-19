class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        multiset<int>ms;
        set<int>st;
        long long sum=0,ans=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
            ms.insert(nums[i]);
            st.insert(nums[i]);
        }
        if(st.size()==k)ans=sum;
        int j=0;
        for(int i=k;i<nums.size();i++)
        {
            sum-=nums[j];
            ms.erase(ms.find(nums[j]));
            if(ms.find(nums[j])==ms.end())st.erase(nums[j]);
            sum+=nums[i];
            ms.insert(nums[i]);
            st.insert(nums[i]);
            if(st.size()==k)
            {
              ans=max(ans,sum);
               
            }
            j++;
        }
        return ans;
    }
};