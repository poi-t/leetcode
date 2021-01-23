/*定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的
 min 函数在该栈中，调用 min、push 及 pop 的时间复杂度都是 O(1)。*/
 
class MinStack {
private:
        stack<int> st;
        stack<int> res;
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        st.push(x);
        if(res.empty()) res.push(x);
        else if(x <= res.top()) res.push(x);
    }
    
    void pop() {
        if(res.top() == st.top()) res.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int min() {
        return res.top();
    }
};
