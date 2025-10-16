class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {

        vector<int>frq(value,0);
        for (auto& it : nums) {
            it = ((it % value) + value) % value;
            frq[it]++;
        }
        auto min=min_element(frq.begin(),frq.end());
        
        return distance(frq.begin(), min)+((*min)*(value));
    }
};