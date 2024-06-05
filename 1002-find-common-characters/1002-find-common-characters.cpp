class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       int N=words.size();
        vector<vector<int>>frq(N,vector <int>(26));
        for(int i=0;i<N;i++){
            for(int j=0;j<words[i].size();j++)
                frq[i][words[i][j]-'a']++;
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
            int mn=105;
            for(int j=0;j<N;j++)
            {
                mn=min(mn,frq[j][i]);
            }
            string s="";
            s+=char(i+'a');
            while (mn--)
            {
                ans.push_back(s);
            }
        }
        return ans;
    }
};