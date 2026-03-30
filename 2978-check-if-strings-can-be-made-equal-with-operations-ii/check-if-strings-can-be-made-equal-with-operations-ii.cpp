class Solution {
public:
   bool check(vector<int>frq)
   {
     for(auto it:frq)
      {
          if(it!=0)return false;
      }
      return true;
   }
    bool checkStrings(string s1, string s2) {
        vector<int>frq1(26),frq2(26);
        for(int i=0;i<s1.size();i++)
        {
            if(i&1){
                frq1[s1[i]-'a']++;
                frq1[s2[i]-'a']--;
            }
            else 
            {
                frq2[s1[i]-'a']++;
                frq2[s2[i]-'a']--;
            }
        }
        return check(frq1)&&check(frq2);
    }
};