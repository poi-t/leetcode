/*你这个学期必须选修 numCourse门课程，记为0到numCourse-1 。在选修某些课程之前需要一些先修课程。
例如，想要学习课程0，你需要先完成课程1，我们用一个匹配来表示他们：[0,1]
给定课程总量以及它们的先决条件，请你判断是否可能完成所有课程的学习？*/
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
