class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int mx=num;
        for(int i=0;i<s.size();i++)
        {
           
            for(int j=i;j<s.size();j++)
            {
                 string m=s;
                 swap(m[i],m[j]);
                mx=max(mx,stoi(m));
            }
        }
        return mx;
    }
};