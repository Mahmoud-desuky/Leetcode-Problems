class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=0;i<k;i++)v.push_back(nums[i]);
        int j=0;
        vector<int>ans;
        for(int i=k;i<nums.size();i++)
        {
            vector<int>m;
            m=v;
           bool ch=true;
            for(int k=1;k<m.size();k++)
            {
                if(m[k]!=m[k-1]+1)
                {
                    ch=false;
                    break;
                }
            }
           if(ch)
                 ans.push_back(m.back());
            else 
                ans.push_back(-1);
            vector<int>temp;
            j++;
            for(int k=j;k<=i;k++)
                temp.push_back(nums[k]);
            v=temp;
        }
        
            vector<int>m;
            m=v;
           bool ch=true;
            for(int k=1;k<m.size();k++)
            {
                if(m[k]!=m[k-1]+1)
                {
                    ch=false;
                    break;
                }
            }
           if(ch)
                 ans.push_back(m.back());
            else 
                ans.push_back(-1);
            
        return ans;
        
    }
};