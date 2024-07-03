class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      
        if(nums.size()<=4)
            return 0;
        int n=nums.size();
        int mn=INT_MAX;
        for(int i=0;i<=3;i++){
           // i 3-i
            int x=3-i;
            mn=min(mn,nums[n-x-1]-nums[i]);
        }
        return mn;
    }
};