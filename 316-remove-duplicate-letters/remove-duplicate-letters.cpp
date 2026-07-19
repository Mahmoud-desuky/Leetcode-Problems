class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        vector<int>frq(26),check(26);
        for(auto c:s)frq[c-'a']++;

        for(auto c:s)
        {
            while(!st.empty()&&st.top()>c)
            {
                if(check[c-'a']==0&&frq[st.top()-'a']>0)
                   {
                     check[st.top()-'a']=0;
                     st.pop();
                   }
                else 
                 break;
            }
            frq[c-'a']--;
            if(check[c-'a']==0)
            {
                st.push(c);
                check[c-'a']=1;
                //cout<< c<<" : "<<st.size()<<"\n";
            }
            
        }
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};