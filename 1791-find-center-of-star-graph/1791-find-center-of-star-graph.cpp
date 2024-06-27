class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>v(100009);
        for(auto it:edges){
                v[it[0]]++;
                v[it[1]]++;
        }
        return (max_element(v.begin(),v.end())-v.begin());
    }
};