// https://www.acmicpc.net/problem/2606

#include <iostream>
#include <queue>
using namespace std;

#define MAX 1001

int n, m, cnt = 0;
int map[MAX][MAX];
bool visited[MAX];
queue<int> q;

void BFS(int v)
{
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        v = q.front();
        q.pop();

        for (int w = 1; w <= n; w++)
        {
            if (map[v][w] == 1 && visited[w] == 0)
            {
                q.push(w);
                visited[w] = true;
                cnt++;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    for (int i = 1; i <= n; i++)
        visited[i] = 0;

    BFS(1);
    cout << cnt;

    return 0;
}