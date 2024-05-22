// https://www.acmicpc.net/problem/1697

#include <iostream>
#include <queue>
using namespace std;

int n, k;
bool visit[100001];

int BFS(int m)
{
    queue<pair<int, int>> q;
    q.push({ m, 0 });

    while (!q.empty())
    {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (x == k)
            return cnt;
        if (x + 1 < 100001 && x + 1 >= 0)
        {
            if (!visit[x + 1])
            {
                visit[x + 1] = true;
                q.push({ x + 1, cnt + 1 });
            }
        }
        if (x - 1 < 100001 && x - 1 >= 0)
        {
            if (!visit[x - 1])
            {
                visit[x - 1] = true;
                q.push({ x - 1, cnt + 1 });
            }
        }
        if (x * 2 < 100001 && 2 * x >= 0)
        {
            if (!visit[x * 2])
            {
                visit[x * 2] = true;
                q.push({ x * 2, cnt + 1 });
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    visit[n] = true;
    cout << BFS(n);
}