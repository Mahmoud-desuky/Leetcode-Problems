class Solution {
public:
    double calcArea(pair<int,int>a,pair<int,int>b,pair<int,int>c)
    {
       double area=0.5*fabs(a.first * (b.second - c.second) +
                      b.first * (c.second - a.second) +
                      c.first * (a.second - b.second));
        return area;

    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double mx=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    mx=max(mx,calcArea({points[i][0],points[i][1]},{points[j][0],points[j][1]},{points[k][0],points[k][1]}));
                }

            }
        }
        return mx;
    }
};