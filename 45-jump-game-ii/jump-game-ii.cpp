class Solution {
public:
    int jump(vector<int>& nums) {
        int mx=0,cnt=0,curent=0;
        if(nums.size()==1)
        return 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]+i>mx)
            {
                mx=nums[i]+i;
            }

            if(curent==i)
            {
                cnt++;
                curent=mx;
            }
        }
        return cnt;
    }
};