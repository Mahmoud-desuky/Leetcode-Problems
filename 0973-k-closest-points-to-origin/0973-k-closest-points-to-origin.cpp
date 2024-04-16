class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       vector<pair<double,int>>p;
        for(int i=0;i<points.size();i++)
        {
            double dis=sqrt(pow(points[i][0],2)+pow(points[i][1],2));
            p.push_back({dis,i});
        }
        sort(p.begin(),p.end());
        vector<vector<int>>ans;
        for(int i=0;i<k;i++)
        {
           ans.push_back(points[p[i].second]); 
        }
        return ans;
    }
};