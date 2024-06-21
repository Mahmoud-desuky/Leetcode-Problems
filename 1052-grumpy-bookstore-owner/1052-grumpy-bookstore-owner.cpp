class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
       vector<int>pr(n+1);
        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==1)
                pr[i]=customers[i];
        }
        for(int i=1;i<n;i++)pr[i]+=pr[i-1];
        
        int sum=0;
        for(int i=0;i<n;i++){
            if(!grumpy[i])sum+=customers[i];
        }
        int mx=pr[minutes-1];
        
        for(int i=minutes,j=0;i<n;i++,j++)
        {
            mx=max(mx,pr[i]-pr[j]);
        }
        return mx+sum;
        
    }
};