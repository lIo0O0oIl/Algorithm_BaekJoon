// https://www.acmicpc.net/problem/6186

#include <iostream>
using namespace std;

int row, col, cnt = 0;
char board[101][101];
int visited[101][101];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void DFS(int x, int y) {
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = x + dy[i];
		int nx = y + dx[i];
		if (nx < 0 || ny < 0 || nx >= row || ny >= col) continue;
		if (board[ny][nx] == '#' && visited[ny][nx] == 0) {
			DFS(ny, nx);
		}
	}
}

int main() 
{
	cin >> col >> row;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (board[i][j] == '#' && visited[i][j] == 0) {
				cnt++;
				DFS(i, j);
			}
		}
	}
	cout << cnt;
}