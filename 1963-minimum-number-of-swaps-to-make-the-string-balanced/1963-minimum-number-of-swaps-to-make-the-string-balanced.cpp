class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
        int cnt=0;
        for(auto c:s)
        {
            if(c=='[')
                st.push(c);
            else 
            {
                if(st.size())st.pop();
                else 
                    cnt++;
            }
        }
        return (cnt+1)/2;
    }
};