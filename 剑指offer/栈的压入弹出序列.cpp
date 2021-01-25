/*���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ���
�����Ƿ�Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ�*/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> test;
        int now = 0;
        for(int i : pushed)
        {
            if(i == popped[now])
            {
                ++now;
                while(!test.empty() && test.top() == popped[now])
                {
                    test.pop();
                    ++now;
                }
            }
            else test.push(i);
        }
        return test.size() == 0;
    }
};
