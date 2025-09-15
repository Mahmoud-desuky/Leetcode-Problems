class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int>frq(26);
        for(auto c:brokenLetters)
           frq[c-'a']++;

        for(int i=0;i<text.size();i++)
        {
            if(text[i]!=' '&&frq[text[i]-'a']>0) 
                text[i]='.';
        }
        text+=' ';
        int i=0,cnt=0;
        bool ch=true;
        while(i<text.size())
        {
            if(text[i]==' ')
            {
                if(ch)
                  cnt++;
                ch=true;
            }
            if(text[i]=='.')
             ch=false;
            i++;
        }
        return cnt;
    }
};