// https://www.acmicpc.net/problem/11403

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int visited[101];
vector<int> graph[101];
int n, temp;

void bfs(int start)
{
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (graph[start][i] == 1)
            q.push(i);
    }

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        visited[x] = 1;

        for (int i = 0; i < n; i++)
        {
            int y = graph[x][i];
            if (visited[i] == 0 && y == 1)
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            graph[i].push_back(temp);
        }
    }

    for (int i = 0; i < n; i++)
    {
        bfs(i);
        for (int j = 0; j < n; j++)
        {
            cout << visited[j] << ' ';
            visited[j] = 0;
        }
        cout << '\n';
    }
}