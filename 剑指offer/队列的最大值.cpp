/*请定义一个队列并实现函数 max_value 得到队列里的最大值，
要求函数max_value、push_back 和 pop_front 的均摊时间复杂度都是O(1)。
若队列为空，pop_front 和 max_value需要返回 -1*/
class MaxQueue {
private:
    queue<int> s;
    deque<int> maxv;
public:
    MaxQueue() {
    }
    
    int max_value() {
        if(maxv.empty()) return -1;
        else return maxv.front();
    }
    
    void push_back(int value) {
        s.push(value);
        while(! maxv.empty() && maxv.back() < value) maxv.pop_back();
        maxv.push_back(value);
    }
    
    int pop_front() {
        if(s.empty()) return -1;
        int ans = s.front();
        s.pop();
        if(maxv.front() == ans) maxv.pop_front();
        return ans;
    }
};
