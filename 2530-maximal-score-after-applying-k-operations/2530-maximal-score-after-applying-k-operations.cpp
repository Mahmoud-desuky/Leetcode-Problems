class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it:nums)pq.push(it);
        
        long long sum=0;
        while (pq.size()&&k)
        {
            sum+=pq.top();
            pq.push((pq.top()+2)/3);
            pq.pop();
            k--;
        }
        return sum;
    }
};