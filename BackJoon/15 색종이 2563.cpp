// https://www.acmicpc.net/problem/2563

#include <iostream>
using namespace std;

int paper[101][101];

int main() {
	int n, x, y, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		for (int j = y; j < y + 10; j++)		// 아래부터 위로 
		{
			for (int k = x; k < x + 10; k++)			// 왼쪽부터 오른쪽으로
			{
				paper[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (paper[i][j] == 1)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}