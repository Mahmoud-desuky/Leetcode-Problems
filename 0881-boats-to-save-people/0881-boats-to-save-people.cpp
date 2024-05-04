class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
        int l=0,r=people.size()-1,ans=0,sum=0;
        while(l<=r)
        {
            if(l==r)
            {
                ans++;
                l++;
                continue;
            }
            if(people[l]+people[r]<=limit)
            {
                l++;
                r--;
                ans++;
            }else 
            {
                r--;
                ans++;
            }
        }
        return ans;
    }
};