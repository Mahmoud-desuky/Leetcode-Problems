class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        deque<pair<int,int>>q;
        for(int i=0;i<tickets.size();i++)
        {
          q.push_back({tickets[i],i});
        }
        bool ch=1;
        int cnt=0;
        while(ch)
        {
            cnt++;
            pair<int,int>p=q.front();
            q.pop_front();
            p.first--;
            if(p.first!=0)
            {
                q.push_back(p);
            }else 
            {
                if(p.second==k)ch=0;
            }
        }
        return cnt;
    }
};