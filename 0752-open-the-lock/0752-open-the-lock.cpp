class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> v(deadends.begin(), deadends.end());
        pair<string, int> c;
        queue<pair<string, int>> q;
        string cur;
        int len = target.length();
        for (int i = 0; i < len; i++) cur.push_back('0');
        q.push({cur, 0});
        while (!q.empty()) {
            c = q.front();
            q.pop();

            if (v.count(c.first)) continue;

            v.insert(c.first);
            if (c.first == target) return c.second;

            for (int i = 0 ; i < len; i++) {
                int val = (int) c.first[i] + 1;
                if (val > (int) '9') val = (int) '0';
                char n = (char) val;
                // copy str
                string nxt = c.first;
                nxt[i] = n;
                if (!v.count(nxt))q.push({nxt, c.second + 1});
                val = (int) c.first[i] - 1;
                if (val < (int) '0') val = (int) '9';
                n = (char) val;
                nxt = c.first;
                nxt[i] = n;
                if (!v.count(nxt))q.push({nxt, c.second + 1});
            }
        }
        return -1;
    }
};