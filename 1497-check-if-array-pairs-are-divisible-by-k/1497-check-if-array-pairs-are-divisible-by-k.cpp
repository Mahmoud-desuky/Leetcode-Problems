class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp;
        for(auto it:arr)
            mp[((it%k)+k)%k]++;
        if(k==1)
            return true;
        for(auto [l,r]:mp)
        {
            cout<<l<<" "<<r<<"\n";
            if(l==0){ 
                if(r&1)
                return false;
            }
             else if(l==k-l)
            {
                if(mp[l]&1)
                    return false;
            }
            else if(mp[l]!=mp[k-l])
                return false;
        }
        return true;
    }
};