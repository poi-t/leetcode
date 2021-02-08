/*���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
push(x) ���� ��Ԫ�� x ����ջ�С�
pop()���� ɾ��ջ����Ԫ�ء�
top()���� ��ȡջ��Ԫ�ء�
getMin() ���� ����ջ�е���СԪ�ء�*/

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

