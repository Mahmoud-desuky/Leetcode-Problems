class Solution {
public:
    int totalMoney(int n) {
        int div=n/7;
        int mod=n%7;
        long long sum=((7*8)/2)*div;
        sum+=(mod*(mod+1))/2;
        cout<<sum<<"\n";
        if(div)
          {
            sum+=(div*mod);
            div--;
          }
                 for(int i=1;i<=div;i++)
                 {
                    sum+=(i*7);
                 }
        return sum;
    }
};