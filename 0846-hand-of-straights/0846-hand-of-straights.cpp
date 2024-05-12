class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
         map<int,int>mp;
        for(auto it:hand)mp[it]++;
        
        while(mp.size())
        {
            auto [id,r]=*mp.begin();
            int l=id;
            for(int i=0;i<groupSize;i++)
            {
                if(mp[l]!=0)
                {
                    mp[l]--;
                    if(mp[l]==0)
                        mp.erase(l);
                    l++;
                }else 
                    return false; 
            }
            
        }
        return true;
    }
};