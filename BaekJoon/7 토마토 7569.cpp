// https://www.acmicpc.net/problem/7569

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, h;
vector<vector<pair<int, int>>> box;    // 3�����迭 ���� ũ�⸦ ���
queue<pair<int, int>> q;

// ��, �Ʒ�, ����, ������, ��, ��
int sx[] = { -1, 1, 0, 0 };
int sy[] = { 0, 0, -1, 1 };
int sz[] = { 1, -1 };

void bfs()
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

			if ((sy[i] == -1 && ny % n == n - 1) || (sy[i] == 1 && ny % n == 0)) continue;
			if (nx < 0 || nx >= m || ny < 0 || ny >= n * h) continue;
			if (box[ny][nx].first == -1 || box[ny][nx].first == 1) continue;

			if (box[ny][nx].second > box[y][x].second + 1)
			{
				box[ny][nx].second = box[y][x].second + 1;
				q.push({ ny, nx });
			}
		}

		for (int i = 0; i < 2; i++)
		{
			int ny = y + (n * sz[i]);

			if (ny < 0 || ny >= n * h) continue;
			if (box[ny][x].first == -1 || box[ny][x].first == 1) continue;

			if (box[ny][x].second > box[y][x].second + 1)
			{
				box[ny][x].second = box[y][x].second + 1;
				q.push({ ny, x });
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> m >> n >> h;
	box.resize(n * h, vector<pair<int, int>>(m));

	for (int i = 0; i < n * h; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> box[i][j].first;
			box[i][j].second = 1000001;
		}
	}

	for (int i = 0; i < n * h; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (box[i][j].first == 1 && box[i][j].second == 1000001)
			{
				box[i][j].second = 0;
				q.push({ i, j });
			}
		}
	}

	bfs();

	int bigDay = 0;
	for (int i = 0; i < n * h; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (box[i][j].second == 1000001 && box[i][j].first == 0)
			{
				cout << -1;
				return 0;
			}

			if (box[i][j].second > bigDay && box[i][j].second != 1000001)
			{
				bigDay = box[i][j].second;
			}
		}
	}
	cout << bigDay;
}



/*

�ּ� ������ 2 * 2 * 1
�ִ�� 100 * 100 * 100
= 1, 000, 000 (�鸸)
1, 000, 000 ���� �丶�� ������ ������ ����.
�׷� �հ� �ڸ� �߰����ָ� �� ?
�� ũ�⵵ �����������.

1 0



5 3 2

0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

0 0 0 0 0
0 0 1 0 0
0 0 0 0 0

= 4


*/