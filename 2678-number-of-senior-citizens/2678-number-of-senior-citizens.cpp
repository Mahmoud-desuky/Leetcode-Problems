class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(auto c:details)
        {
            string s="";
            s+=c[11];
            s+=c[12];
            int n=stoi(s);
            if(n>60)cnt++;
        }
        return cnt;
    }
};