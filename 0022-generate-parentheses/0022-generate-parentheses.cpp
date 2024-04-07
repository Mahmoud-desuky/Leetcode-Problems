class Solution {
public:
   vector<string>ans;
  
   void rec(int l,int r,string s){
       if(!l&&!r)
       {
             ans.push_back(s);
             return;
       }
       if(l!=0){
       rec(l-1,r,s+'(');
       }
       if(r>l)
       rec(l,r-1,s+')');
   }
    vector<string> generateParenthesis(int n) {
        rec(n,n,"");
        return ans;      
    }
};