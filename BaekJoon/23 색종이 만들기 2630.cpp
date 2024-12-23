// https://www.acmicpc.net/problem/2630

#include <iostream>
using namespace std;

int n, blue, white;
int arr[129][129];

void cut(int x1, int x2, int y1, int y2)		// 0���� �����ϴ°� �����ؼ�.
{
	int count = (x2 - x1) * (y2 - y1);

	// 2���������� ����
	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			if (arr[i][j] == 1)		// �Ķ����̶��	
			{
				count--;
			}
		}
	}

	if (count == (x2 - x1) * (y2 - y1))		// �� ���
	{
		white++;
		return;
	}
	else if (count == 0)		// �� �Ķ���
	{
		blue++;
		return;
	}
	else		// ���� �޶�. 4���� �ɰ���.
	{
		cut(x1, x1 + (x2 - x1) / 2, y1, y1 + (y2 - y1) / 2);		// ������
		cut(x1, x1 + (x2 - x1) / 2, y1 + (y2 - y1) / 2, y2);		// ������ ��
		cut(x1 + (x2 - x1) / 2, x2, y1, y1 + (y2 - y1) / 2);			// ���� �Ʒ�
		cut(x1 + (x2 - x1) / 2, x2, y1 + (y2 - y1) / 2, y2);		// ������ �Ʒ�
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