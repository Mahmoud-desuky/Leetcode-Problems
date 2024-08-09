class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end())
            return "";
        auto cmp = [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first < b.first;
        };
        auto it = upper_bound(mp[key].begin(), mp[key].end(), make_pair(timestamp, ""), cmp)-mp[key].begin()-1;
        
        if (it < 0)
            return "";
       
        return mp[key][it].second;
    }
};
