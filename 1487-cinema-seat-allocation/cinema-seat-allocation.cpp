class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>>mp;
        for(int i=0;i<reservedSeats.size();i++)
        {
              mp[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
        }
        long long sum=0;
        
        for(auto [l,r]:mp)
        {
            vector<int>pr(11);
            for(auto it:r)pr[it]++;

            for(int i=1;i<11;i++)pr[i]+=pr[i-1];

            if(pr[5]-pr[1]==0)
            {
                sum++;
                if(pr[9]-pr[5]==0)
                sum++;
            }
            else if(pr[7]-pr[3]==0)
             sum++;
            else if(pr[9]-pr[5]==0)
            sum++;

        }
        long long rem=n-mp.size();
        sum+=(rem*2);
        return sum;
    }
};