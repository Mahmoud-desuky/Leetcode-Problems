class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>ans;
        while(i<m&&j<n)
        {
            if(nums1[i]>nums2[j])
             {
                swap(nums1[i++],nums2[j]);
                int x=j;
                while(x+1<n)
                {
                    if(nums2[x]>nums2[x+1])
                      swap(nums2[x],nums2[x+1]);
                      x++;
                }
             }
            else 
              i++;
        }
        while(j<n)
           swap(nums1[i++],nums2[j++]);
    }
};