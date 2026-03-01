class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>st;

        for(int i=1,j=0;i<=n;i++)
        {
            if(j<target.size())
            {
                if(target[j]==i)
                {
                    st.push_back("Push");
                    j++;
                }
                else 
                {
                    st.push_back("Push");
                    st.push_back("Pop");
                }
            }
            else 
            {
                return st;
            }
        }
        return st;
    }
};