class CustomStack {
public:
    vector<int>v;
    int i=0;
    CustomStack(int maxSize) {
        v=vector<int>(maxSize);
        i=0;
    }
    
    void push(int x) {
        if(i!=v.size())
            v[i++]=x;
    }
    
    int pop() {
        if(i>0)
            return v[--i];
        return -1;
    }
    
    void increment(int k, int val) {
        for(int j=0;j<k&&j<i;j++)
            v[j]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */