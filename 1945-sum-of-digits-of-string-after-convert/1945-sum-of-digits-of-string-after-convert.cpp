class Solution {
public:
    int getLucky(string s, int k) {
        bool ch=0;
        int sum;
        while(k--)
        {
         sum=0;
            for(int i=0;i<s.size();i++)
            {
                if(!ch)
                {
                    int x=(s[i]-'a')+1;
                  
                    sum+=x%10;
                    sum+=x/10;
                }else{
                    sum+=(s[i]-'0');
                }
            }
            ch=1;
            s=to_string(sum);
        }
        return sum;
    }
};