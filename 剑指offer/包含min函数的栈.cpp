/*����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ����СԪ�ص�
 min �����ڸ�ջ�У����� min��push �� pop ��ʱ�临�Ӷȶ��� O(1)��*/
 
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
