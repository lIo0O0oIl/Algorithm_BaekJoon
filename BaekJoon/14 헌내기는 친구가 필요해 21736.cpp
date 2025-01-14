// https://www.acmicpc.net/problem/21736

#include <iostream>
using namespace std;

char map[601][601];
bool visited[601][601];
int people;
int n, m;

void BFS(int x, int y)		// 가로, 세로
{
	if (visited[y][x] == true) return;
	else if (x < 0 || y < 0 || x >= m || y >= n) return;

	if (map[y][x] == 'X') return;
	else if (map[y][x] == 'P') people++;

	visited[y][x] = true;
	
	BFS(x + 1, y);
	BFS(x, y + 1);
	BFS(x - 1, y);
	BFS(x, y - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int x = 0, y = 0;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 'I')
			{
				y = i;	// 세로
				x = j;	// 가로
			}
		}
	}

	BFS(x, y);
	
	if (people != 0) cout << people;
	else cout << "TT";
}