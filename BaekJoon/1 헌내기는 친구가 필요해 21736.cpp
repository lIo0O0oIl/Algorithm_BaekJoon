// https://www.acmicpc.net/problem/21736

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, cnt = 0;
vector<vector<pair<char, bool>>> vec;
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

            if (nx < 0 || nx >= m || ny < 0 || ny >= n || vec[ny][nx].second == true)
                continue;

            if (vec[ny][nx].first == 'P')
                cnt++;
            else if (vec[ny][nx].first == 'X')
                continue;

            vec[ny][nx].second = true;
            q.push({ ny, nx });
        }
    }
}

int main()
{
    cin >> n >> m;
    vec.resize(n, vector<pair<char, bool>>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> vec[i][j].first;
            vec[i][j].second = false;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (vec[i][j].first == 'I')
            {
                vec[i][j].second = true;
                q.push({ i, j });
            }
        }
    }

    BFS();

    if (cnt != 0)
        cout << cnt;
    else
        cout << "TT";
}