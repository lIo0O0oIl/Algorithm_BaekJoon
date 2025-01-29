// https://www.acmicpc.net/problem/17071

#include <iostream>
#include <tuple>
#include <queue>
using namespace std;
using ll = long long;

ll n, k;
bool visit[500001];

int BFS()
{
    queue<tuple<ll, ll, ll, ll>> q;
    q.push({ n, 0, k, 1 });
    ll move = 1;

    while (!q.empty())
    {
        int myPos = get<0>(q.front());
        int time = q.front().second.first;
        int brother = q.front().second.second;
        q.pop();

        if (myPos == brother) return time;

        if (myPos + 1 < 500001 && myPos + 1 >= 0)
        {
            if (!visit[myPos + 1])
            {
                visit[myPos + 1] = true;
                q.push({ myPos + 1, {time + 1, k + move } });
            }
        }

        if (myPos - 1 < 500001 && myPos - 1 >= 0)
        {
            if (!visit[myPos - 1])
            {
                visit[myPos - 1] = true;
                q.push({ myPos - 1, {time + 1, k + move } });
            }
        }

        if (myPos * 2 < 500001 && 2 * myPos >= 0)
        {
            if (!visit[myPos * 2])
            {
                visit[myPos * 2] = true;
                q.push({ myPos * 2, {time + 1, k + move } });
            }
        }

        move++;
        if (brother > 500000) return -1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> k;
    visit[n] = true;
    cout << BFS();
}