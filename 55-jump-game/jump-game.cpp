#include<bits/stdc++.h>
class Solution {
public:
    bool canJump(vector<int>& nums) {
       

         int mx=nums[0];

         for(int i=0;i<nums.size();i++)
         {
            if(mx>=nums.size()-1)
            return true;

            if(nums[i]==0&&mx==i)
            return false;

            if(i+nums[i]>mx)
            mx=i+nums[i];
         }
         
        return true;
    }
};