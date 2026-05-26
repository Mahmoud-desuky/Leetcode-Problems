class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>frq(52);
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            frq[word[i]-'a']++;
            else 
            frq[word[i]-'A'+26]++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            ans+=(frq[i]>0&&frq[i+26]>0);
        }
        return ans;
    }
};