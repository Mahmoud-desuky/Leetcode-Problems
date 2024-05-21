class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        for(int i=0;i<(1<<nums.size());i++)
        {
            bitset<10>b(i);
            vector<int>m;
            for(int j=0;j<nums.size();j++){
                if(b[j])
                    m.push_back(nums[j]);
            }
            v.push_back(m);
        }
        return v;
        
    }
};