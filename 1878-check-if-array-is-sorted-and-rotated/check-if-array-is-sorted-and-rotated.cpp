class Solution {
public:
    bool check(vector<int>& nums) {
        int i=1,n=nums.size(),temp=0;
        while(i<n)
        {
            if(nums[i]<nums[i-1]){
                temp++;
                if(temp>1)
                return false;
            }
            i++;
        } 
        if (nums[0] < nums[n - 1]) temp++;
        return temp <= 1;

        
    }
};