class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int cnt=2;
        vector<int>nums2=nums;
       for(int i=2;i<nums.size();i++){

            if(nums2[i]!=nums2[i-2])
            {
                nums[cnt++]=nums[i];
            }
        }
        return cnt;
    }
};