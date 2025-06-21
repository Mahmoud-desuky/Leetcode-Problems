class Solution {
public:
    int minimumDeletions(string word, int k) {
       vector<int>frq(26);
       for(auto c:word)
         frq[c-'a']++;

     
      int ans=10000000;
      for(int i=0;i<26;i++)
      {
        int sum=0;
        for(int j=0;j<26;j++)
        {
            if(frq[i]>frq[j])
               sum+=frq[j];
            if(frq[i]+k<frq[j])
              sum+=frq[j]-frq[i]-k;
        }
        ans=min(ans,sum);
      }
      return ans;
    }
};