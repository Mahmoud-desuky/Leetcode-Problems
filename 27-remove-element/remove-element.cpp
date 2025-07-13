class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int cnt=0;
        vector<int>temp;
        for(auto it:nums)
          {
            if(it!=val)
            {
                cnt++;
                temp.push_back(it);
            }
          }
          nums=temp;
        return cnt;
    }
};