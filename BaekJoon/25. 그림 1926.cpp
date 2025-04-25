// https://www.acmicpc.net/problem/1926

#include <iostream>
#include <queue>
using namespace std;

bool visited[500][500];
int painting[500][500];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int result_cnt = 0, result_max = 0;
int n, m;

void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    visited[x][y] = true;

    int max = 1;

    while (!q.empty())
    {
        int fx = q.front().first;
        int fy = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = fx + dx[i];
            int ny = fy + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            {
                continue;
            }

            if (!visited[nx][ny] && painting[nx][ny] == 1)
            {
                visited[nx][ny] = true;
                q.push({ nx, ny });
                max++;
            }
        }
    }

    if (max > result_max)
    {
        result_max = max;
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> painting[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && painting[i][j] == 1)
            {
                result_cnt++;
                BFS(i, j);
            }
        }
    }

    cout << result_cnt << "\n" << result_max;
}