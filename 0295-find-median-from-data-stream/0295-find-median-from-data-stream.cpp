class MedianFinder {
public:
    priority_queue<int> maxHeap ;
    priority_queue<int,vector <int>,greater<int>> minHeap;
    MedianFinder() {
         minHeap= priority_queue<int,vector <int>,greater<int>> ();
        maxHeap=priority_queue<int>();
        
    }
    void addNum(int x) {
        if (maxHeap.empty() || maxHeap.top() >= x)
            maxHeap.push(x);
        else
            minHeap.push(x);
        
        balanceHeaps();
    }
    void balanceHeaps()
    {
         if (maxHeap.size() > minHeap.size() + 1)
         {
             minHeap.push(maxHeap.top());
             maxHeap.pop();
         }
        else if (maxHeap.size() < minHeap.size())
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    double findMedian() {
         if(maxHeap.size() == minHeap.size())
         {
             cout<<maxHeap.top()<<" "<<minHeap.top();
             return ((double) maxHeap.top() + minHeap.top())/2;
         }
        else
            return maxHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */