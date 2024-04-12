class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();  
        vector<int>pr(n+5);
        for(int i=1;i<=n;i++)
        {
            pr[i]=nums[i-1];
            pr[i]+=pr[i-1];
        }
        int ans=-1;
        for(int i=1;i<=n;i++)
        {
           // cout<<pr[i]<<" ";
            if(pr[i-1]==(pr[n]-pr[i]))
                return i-1;
        }
        return -1;
        
    }
};