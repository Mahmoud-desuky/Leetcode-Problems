class Solution {
public:
    long long minimumSteps(string s) {
        int cnt=0;
        for(auto c:s)
            cnt+=(c=='1');
        long long sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                sum+=((s.size()-cnt)-i);
                    cnt--;
            }
        }
        return sum;
    }
};