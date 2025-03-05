// https://www.acmicpc.net/problem/7576

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<pair<int, int>>> box;
queue<pair<int, int>> q;

int sx[] = { -1, 1, 0, 0 };
int sy[] = { 0, 0, -1, 1 };

void bfs(int x, int y)
{
	while (!q.empty())
	{
		int x = q.front().second;
		int y = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + sx[i];
			int ny = y + sy[i];

			if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
			if (box[ny][nx].first == -1) continue;


			if (box[ny][nx].second > box[y][x].second + 1)
			{
				box[ny][nx].second = box[y][x].second + 1;
				box[ny][nx].first = 1;
				q.push({ ny, nx });
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> n >> m;
	box.resize(n, vector<pair<int, int>>(m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> box[i][j].first;
			box[i][j].second = 1001;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (box[i][j].first == 1)
			{
				box[i][j].second = 0;
				q.push({ i, j });
				bfs(i, j);
			}
		}
	}

	int bigDay = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (box[i][j].first == 0)
			{
				cout << -1;
				return 0;
			}
			if (box[i][j].second > bigDay)
			{
				bigDay = box[i][j].second;
			}
		}
	}
	cout << bigDay;
}