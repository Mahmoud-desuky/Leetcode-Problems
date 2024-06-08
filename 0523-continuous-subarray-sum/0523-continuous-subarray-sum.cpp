class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<long long>pr;
        pr.push_back(0);
        for(auto&it:nums)pr.push_back(it%=k);
        for(int i=1;i<=nums.size();i++)pr[i]=(pr[i]+pr[i-1])%k;
        map<int,int>mp;
        mp[0]++;
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[pr[i]]!=0)
            {
                if(pr[i]==pr[i-1])
                {
                    if(mp[pr[i]]>1)
                        return true;
                }
                else 
                    return true;
            }
            mp[pr[i]]++;
        }
        
        return false;
    }
};