class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
       vector<int>ans(code.size());
        int n=code.size();
        if(k==0)
            return ans;
        for(int i=0;i<code.size();i++)
        {
            int sum=0;
            if(k>0)
            {
                int x=i+1,y=k;
                while(y--)
                {
                    sum+=code[x%n];
                    x++;
                }
            }
            else 
            {
                 int x=i-1,y=k*-1;
                while(y--)
                {
                    sum+=code[((x%n)+n)%n];
                    x--;
                }
            }
            ans[i]=sum;
        }
        return ans;
        /*  vector <int>p(code.size());
        if(k==0)
            return p;
        p[0]=code[0];
        for(int i=1;i<code.size();i++)p[i]=p[i-1]+code[i];
        vector<int>ans;
        int n=p.size();
        if(k>0)
        {
            for(int i=0;i<p.size();i++)
            {
                if(i+k>=n)
                {
                    int x=(i+k)-n;
                    ans.push_back(p[n-1]-p[i]+p[x]);
                }else 
                    ans.push_back(p[i+k]-p[i]);
            }
        }else 
        {
            k*=-1;
             for(int i=0;i<n;i++)
            {
                if(i-k<0)
                {
                    int x=n-abs(i-k);
                   
                  if(x==k)
                  {
                      ans.push_back(p[n-1]-p[x-1]);
                  }
                    else
                    {
                        ans.push_back(p[n-1]-p[x-1]+p[i-1]);
                    }

                }else 
                {
                    if(i-k-1<=0)
                         ans.push_back(p[i-1]);
                    else 
                          ans.push_back(p[i-1]-p[i-k-1]);
                }
            }
        }
        return ans;
            */
    }
};