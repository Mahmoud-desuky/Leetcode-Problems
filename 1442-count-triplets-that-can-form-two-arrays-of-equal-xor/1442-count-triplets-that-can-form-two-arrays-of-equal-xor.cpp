class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        map<int,vector<pair<int,int>>>mp;
        for(int i=0;i<n-1;i++){
            int xa=0;
            for(int j=i+1;j<n;j++){
                xa^=arr[j-1];
                int xb=0;
               for(int k=j;k<n;k++)
               {
                   xb^=arr[k];
                if(xa==xb)cnt++;
               }
            }
        }
        return cnt;
    }
};