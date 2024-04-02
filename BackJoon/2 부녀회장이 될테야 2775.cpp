// https://www.acmicpc.net/problem/2775

#include <iostream>
using namespace std;

int arr[15][15];

int DP(int k, int n) {
	if (arr[k][n] == 0)
	{
		for (int i = 0; i < n; i++)
		{
			arr[k][n] += DP(k - 1, i);
		}
	}
	return arr[k][n];
}

int main() {
	int t, k, n;		// �׽�Ʈ ���̽�, ��, ȣ
	cin >> t;		

	for (int i = 0; i < 15; i++)
	{
		arr[0][i] = i + 1;
	}

	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;
		cout << DP(k, n) << '\n';
	}
}


/*

2 = 1, 4, 10
1 = 1, 3, 6, 10, 15, 21
0 = 1, 2, 3, 4, 5, 6

����Լ��� �ؾ��ҵ�.. �޸����¡�ϰ�... ���� 0 ���� 14���� �ִ°ǰ�?
*/