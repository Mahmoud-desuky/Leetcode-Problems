class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(auto it:nums)mp[it]++;
        vector<int>ans;
        for(auto [l,r]:mp){
            if(r==1)ans.push_back(l);
        }
        return ans;
    }
};