class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=2;i<arr.size();i++)
        {
            int cnt=(arr[i]&1)+(arr[i-1]&1)+(arr[i-2]&1);
            if(cnt==3)return true;
        }
        return false;
    }
};