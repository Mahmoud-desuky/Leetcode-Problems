class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            bitset<32>b(i);
            int x=0;
            for(int j=0;j<n;j++)
            {
                if(b[j])x^=nums[j];
            }
            sum+=x;
        }
        return sum;
    }
};