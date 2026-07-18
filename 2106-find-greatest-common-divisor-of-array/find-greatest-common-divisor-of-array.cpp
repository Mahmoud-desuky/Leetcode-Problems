class Solution {

public:
  int gcd(int a,int b)
  {
    return (b==0)?a:gcd(b,a%b);
  }
    int findGCD(vector<int>& nums) {
        int mn= 1001, mx=0;
        for(auto it :nums)
        {
            mn=min(mn,it);
            mx=max(mx,it);
        }
        return gcd(mn,mx);
    }
};