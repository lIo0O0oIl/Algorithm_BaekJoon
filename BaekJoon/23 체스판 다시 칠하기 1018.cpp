// https://www.acmicpc.net/problem/1018

#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board;

int boardCheck(int _i, int _j)
{
	int cnt = 0;
	bool is_W = false;
	if (board[_i][_j] == 'W') is_W = true;
	for (int i = _i; i < _i + 8; i++)
	{
		for (int j = _j; j < _j + 8; j++)
		{
			if (is_W)
			{
				is_W = !is_W;
				if (board[i][j] == 'W') continue;
				else cnt++;
			}
			else
			{
				is_W = !is_W;
				if (board[i][j] == 'B') continue;
				else cnt++;
			}
		}
	}
	if (64 - cnt < cnt)
	{
		cnt = 64 - cnt;
	}
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m, small = 65, now;
	cin >> n >> m;
	board.resize(n, vector<char>(m));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> board[i][j];
		}
	}		// 체스판 입력받기

	for (int i = 0; i <= n - 8; ++i)
	{
		for (int j = 0; j <= m - 8; ++j)
		{
			// 돌 수 있는 시작점 찾기
			now = boardCheck(i, j);
			if (now < small)
			{
				small = now;
			}
		}
	}
	cout << small;
}