class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n=nums2.size();
        vector<int>v(n,-1);
        for(int i=0;i<n;i++)
        {
            while (!st.empty()&&nums2[st.top()]<nums2[i])
            {
                v[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[nums2[i]]=v[i];
        vector<int>ans(nums1.size());
        for(int i=0;i<ans.size();i++)
            ans[i]=mp[nums1[i]];
        return ans;
    }
};