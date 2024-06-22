class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       int sum=0,ans=0;
       map<int,int>mp;
        mp[sum]=1;
        for(auto it:nums)
        {
            sum+=(it&1);
            if(mp.find(sum-k)!=mp.end())
            {
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
        /*    vector<int>v;
        v.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1)
                v.push_back(i+1);
        }
        int n=nums.size();
        v.push_back(n+1);
        long long sum=0;
        for(int i=1,j=k;j<v.size()-1;i++,j++)
        {
          //  cout<<v[j]<<" "<<v[i]<<"\n";
            long long x=v[j+1]-v[j]-1;
            long long y=v[i]-v[i-1]-1;
            cout<<y<<" "<<x<<"\n";
            sum++;
            x+=y;
            sum+=(x*(x-1))/2;
        }
        return sum;*/
    }
};