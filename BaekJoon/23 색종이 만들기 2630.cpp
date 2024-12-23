// https://www.acmicpc.net/problem/2630

#include <iostream>
using namespace std;

int n, blue, white;
int arr[129][129];

void cut(int x1, int x2, int y1, int y2)		// 0부터 시작하는걸 감안해서.
{
	int count = (x2 - x1) * (y2 - y1);

	// 2중포문으로 구분
	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			if (arr[i][j] == 1)		// 파란색이라면	
			{
				count--;
			}
		}
	}

	if (count == (x2 - x1) * (y2 - y1))		// 다 흰색
	{
		white++;
		return;
	}
	else if (count == 0)		// 다 파란색
	{
		blue++;
		return;
	}
	else		// 색이 달라. 4개로 쪼개자.
	{
		cut(x1, x1 + (x2 - x1) / 2, y1, y1 + (y2 - y1) / 2);		// 왼쪽위
		cut(x1, x1 + (x2 - x1) / 2, y1 + (y2 - y1) / 2, y2);		// 오른쪽 위
		cut(x1 + (x2 - x1) / 2, x2, y1, y1 + (y2 - y1) / 2);			// 왼쪽 아래
		cut(x1 + (x2 - x1) / 2, x2, y1 + (y2 - y1) / 2, y2);		// 오른쪽 아래
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cut(0, n, 0, n);
	cout << white << '\n' << blue;
}