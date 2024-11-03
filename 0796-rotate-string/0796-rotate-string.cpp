class Solution {
public:
    bool rotateString(string s, string goal) {
        deque<char>a,b;
        for(auto c:s)a.push_back(c);
        for(auto c:goal)b.push_back(c);
            
        for(int i=0;i<s.size();i++)
        {
            if(a==b)
                return true;
            a.push_front(a.back());
            a.pop_back();
        }
        return false;
    }
};