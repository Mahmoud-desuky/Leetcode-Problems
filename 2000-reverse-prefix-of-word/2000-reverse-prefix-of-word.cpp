class Solution {
public:
    string reversePrefix(string word, char ch) {
        int id=-1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                id=i;
                break;
            }
        }
        if(~id)
        reverse(word.begin(),word.begin()+id+1);
        return word;
    }
};