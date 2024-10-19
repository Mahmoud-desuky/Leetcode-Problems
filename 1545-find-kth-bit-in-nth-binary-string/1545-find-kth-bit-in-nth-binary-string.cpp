class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string>v;
        v.push_back("0");
        for(int i=1;i<n;i++)
        {
            string m=v.back();
            string mr="";
            for(int j=m.size()-1;j>=0;j--)
            {
                if(m[j]=='1')mr+='0';
                else mr+='1';
            }
            v.push_back(m+'1'+mr);
        }
        return v[n-1][k-1];
        
    }
};