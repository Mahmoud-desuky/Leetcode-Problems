class MyCalendar {
public:
    multiset<pair<int,int>>ms;
    MyCalendar() {
        ms=multiset<pair<int,int>>();
    }
    
    bool book(int start, int end) {
        auto it=ms.upper_bound({start,end});
        if(it==ms.end())
        {
            if(it==ms.begin())
            {
                ms.insert({start,end});
                return true;
            }else 
            {
                --it;
                pair<int,int>p=*it;
                if(p.second>start)
                    return false;
                ms.insert({start,end});
                return true;
            }
        }else 
        {
             pair<int,int>p=*it;
            if(p.first<end)
                return false;
            if(it!=ms.begin())
            {
                --it;
                p=*it;
                if(p.second>start)
                    return false;
            }
            ms.insert({start,end});
            return true;
        }
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */