/*�����ѧ�ڱ���ѡ�� numCourse�ſγ̣���Ϊ0��numCourse-1 ����ѡ��ĳЩ�γ�֮ǰ��ҪһЩ���޿γ̡�
���磬��Ҫѧϰ�γ�0������Ҫ����ɿγ�1��������һ��ƥ������ʾ���ǣ�[0,1]
�����γ������Լ����ǵ��Ⱦ������������ж��Ƿ����������пγ̵�ѧϰ��*/
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> edges(numCourses);
        vector<int> res(numCourses);
        for (vector<int>& i: prerequisites) {
            edges[i[1]].push_back(i[0]);
            ++res[i[0]];
        }
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (res[i] == 0) {
                q.push(i);
            }
        }
        int vis = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            ++vis;
            for (int i: edges[u]) {
                --res[i];
                if (res[i] == 0) {
                    q.push(i);
                }
            }
        }

        return vis == numCourses;
    }
};
