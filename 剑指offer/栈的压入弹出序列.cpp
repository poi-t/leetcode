/*输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个
序列是否为该栈的弹出顺序。假设压入栈的所有数字均不相等。*/

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
