class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     int x=0;
        for(auto it:nums)x^=it;
        int cnt=0;
        while(k||x)
        {
            if(x%2!=k%2)cnt++;
            
            x/=2;
            k/=2;
        }
        return cnt;
    }
};