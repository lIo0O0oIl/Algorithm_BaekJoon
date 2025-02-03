// https://www.acmicpc.net/problem/14940

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, cnt = 0;
vector<vector<pair<int, int>>> vec;
queue<pair<int, int>> q;

int sx[] = { -1, 1, 0, 0 };
int sy[] = { 0, 0, -1, 1 };

void BFS()
{
    while (!q.empty())
    {
        int x = q.front().second;
        int y = q.front().first;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + sx[i];
            int ny = y + sy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n || vec[ny][nx].second != -1)
                continue;

            if (vec[ny][nx].first == 0)
            {
                vec[ny][nx].second = 0;
                continue;
            }

            vec[ny][nx].second = vec[y][x].second + 1;
            q.push({ ny, nx });
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    vec.resize(n, vector<pair<int, int>>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> vec[i][j].first;
            vec[i][j].second = -1;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (vec[i][j].first == 2)
            {
                vec[i][j].second = 0;
                q.push({ i, j });
                break;
            }
        }
    }

    BFS();

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (vec[i][j].first == 0 && vec[i][j].second == -1)     // bfs에서 가지 못했던 곳들
            {
                cout << '0' << ' ';
            }
            else cout << vec[i][j].second << ' ';
        }
        cout << '\n';
    }
}