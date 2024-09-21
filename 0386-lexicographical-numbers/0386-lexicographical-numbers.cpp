class Solution {
public:

    vector<int> lexicalOrder(int n) {
      int i=1;
      vector<int>ans;
        for(int j=1;j<=n;j++)
        {
            ans.push_back(i);
            if(i*10<=n)
                i*=10;
            else 
            {
                while (i%10==9||i>=n)
                    i/=10;
                i++;
            }
        }
        return ans;
    }
};