class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0;
        int n=version1.size(),m=version2.size();
        while(i<n||j<m)
        {
            int s1=0,s2=0;
            while(i<n&&version1[i]!='.')
            {
                s1=s1*10+(version1[i]-'0');
                i++;
            }
             while(j<m&&version2[j]!='.')
            {
                s2=s2*10+(version2[j]-'0');
                j++;
            }
            if(s1>s2)
                return 1;
            if(s1<s2)
                return -1;
            i++;
            j++;
        }
        return 0;
    }
};