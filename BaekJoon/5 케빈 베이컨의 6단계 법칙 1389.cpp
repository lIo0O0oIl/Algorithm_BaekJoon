// https://www.acmicpc.net/problem/1389

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int visited[101];
vector<vector<int>> graph(101, vector<int>(0));
int n, m;

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (visited[y] == 0)
            {
                q.push(y);
                visited[y] = visited[x] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m;

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int kevin = 0, big = 100000, answer = 0;
    for (int i = 1; i <= n; i++)
    {
        bfs(i);
        for (int j = 1; j <= n; j++)
        {
            kevin += visited[j];
            visited[j] = 0;
        }
        if (kevin < big)
        {
            big = kevin;
            answer = i;
        }
        kevin = 0;
    }
    cout << answer;
}