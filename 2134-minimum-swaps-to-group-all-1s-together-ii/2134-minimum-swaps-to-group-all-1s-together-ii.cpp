class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=0;
        for(auto it:nums)
            n+=(it==1);
        
        map<int,int>b,e;
        int cnt=0,sum=0;
        for(int i=0;i<n;i++)
        {
            cnt+=(nums[i]==1);
            b[i+1]=cnt;
        }
        sum=cnt;
        cnt=0;
        
        for(int i=nums.size()-1,j=0;i>=0&&j<n;i--,j++)
        {
             cnt+=(nums[i]==1);
            e[j+1]=cnt;
        }
        int mn=n-sum;
        
        for(int i=n,j=0;i<nums.size();i++,j++)
        {
            sum+=(nums[i]==1);
            sum-=(nums[j]==1);
            mn=min(mn,n-sum);
        }
        for(int i=0;i<=n;i++)
        {
            int j=n-i;
            mn=min(mn,n-(b[i]+e[j]));
        }
        return mn;
    }
};