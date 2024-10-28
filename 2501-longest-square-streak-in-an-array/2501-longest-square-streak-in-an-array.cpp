class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         map<long long ,bool>mp;
        set<int>st;
        for(auto it:nums)mp[it]=true;
        
        int ans=0;
        for(auto it:nums)
        {
            if(st.find(it)!=st.end())
                continue;
            int cur=it;
            int cnt=1;
            while(true)
            {
                long long x=cur;
                if(x*x>1e5)
                    break;
                if(mp[cur*cur])
                {
                    cnt++;
                    cur*=cur;
                    st.insert(cur);
                }else 
                    break;
            }
            ans=max(ans,cnt);
        }
        if(ans==1)
            ans=-1;
        return ans;
    }
};