class Solution {
public:
    string sortVowels(string s) {
        string vowels ="";
        string vchar="aAeEiIoOuU";

        for(auto c:s)
        {
            if(vchar.find(c)!=-1)
            {
                vowels+=c;
            }
        }
        sort(vowels.begin(),vowels.end());
        int i=0;
        for(auto&c:s)
        {
            if(vchar.find(c)!=-1)
            {
               c=vowels[i++];
            }
        }
        return s;
    }
};