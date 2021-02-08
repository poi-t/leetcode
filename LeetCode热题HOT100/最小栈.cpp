/*设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
push(x) —— 将元素 x 推入栈中。
pop()—— 删除栈顶的元素。
top()—— 获取栈顶元素。
getMin() —— 检索栈中的最小元素。*/

class MinStack {
private:
    stack<long> st;
    long tmin;
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        if(st.empty())
        {
            st.push(long(0));
            tmin = x;
        }
        else
        {
            st.push(x- tmin);
            if(x - tmin < 0)
            {
                tmin = x;
            }
        }
    }
    
    void pop() {
        if(st.top() < 0)
        {
            tmin -= st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top() < 0) 
        {
            return tmin;
        }
        else
        {
            return (tmin + st.top());
        }
    }
    
    int getMin() {
        return tmin;
    }
};

