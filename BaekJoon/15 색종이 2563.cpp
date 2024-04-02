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
		for (int j = y; j < y + 10; j++)		// �Ʒ����� ���� 
		{
			for (int k = x; k < x + 10; k++)			// ���ʺ��� ����������
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