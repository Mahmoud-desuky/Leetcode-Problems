class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp;
        for(int i=nums.size()-1;i>=0;i--)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>1)
            {
                return (i+1)/3+((i+1)%3!=0);
            }
        }
        return 0;
    }
};