class Solution {
public:
    bool IsVowel(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    }
    bool doesAliceWin(string s) {
        int a=0;

        for(auto c:s)
        {
            a+=IsVowel(c);
        }
        if(a>0)
            return true;
        return false;
    }
};