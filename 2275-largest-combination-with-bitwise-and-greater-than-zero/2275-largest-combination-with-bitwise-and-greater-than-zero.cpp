class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int>v(32);
        for(auto it:candidates)
        {
            bitset<32>b(it);
           for(int i=0;i<32;i++)
           {
               if(b[i])
                   v[i]++;
           }
        }
        
        return *max_element(v.begin(),v.end());
    }
};