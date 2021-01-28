/*�붨��һ�����в�ʵ�ֺ��� max_value �õ�����������ֵ��
Ҫ����max_value��push_back �� pop_front �ľ�̯ʱ�临�Ӷȶ���O(1)��
������Ϊ�գ�pop_front �� max_value��Ҫ���� -1*/
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
