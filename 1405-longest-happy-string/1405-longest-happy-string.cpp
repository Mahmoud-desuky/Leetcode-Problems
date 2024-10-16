class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
       int ca=0,cb=0,cc=0;
        string ans="";
        int x=a+b+c;
        for(int i=0;i<x;i++)
        {
            if((a>=b&&a>=c&&ca<2)|| 
               (a>0&&(cb==2||cc==2)))
               {
                   ans+='a';
                   ca++;
                   a--;
                   cb=cc=0;
               }
            else if((b>=a&&b>=c&&cb<2)
                    ||(b>0&&(ca==2||cc==2)))
                    {
                cout<<"*";
                            ans+='b';
                            cb++;
                            b--;
                            ca=cc=0;
                        }
          else if((c>=a&&c>=b&&cc<2)||
                  (c>0&&(ca==2||cb==2)))
                        {
                            ans+='c';
                            c--;
                            cc++;
                            ca=cb=0;
                        }
        }
                        return ans;

    }
};