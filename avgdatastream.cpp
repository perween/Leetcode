class MovingAverage {
public:
      int sum = 0;
      int windowsize = 0;
      queue<int> q;
    
    MovingAverage(int size) {
       windowsize = size;
    }
    
    double next(int val) {
        if(windowsize == q.size())
        {
            sum = sum - q.front();
            q.pop();
        }
        q.push(val);
        sum = sum + val;
        return (double)sum/q.size();
        
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
