class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int st=0,mx=0,n=gain.size();
      for(int i=0;i<n;i++)
      {
        st+=gain[i];
        mx=max(mx,st);
      }
      return mx;
    }
};