// https://www.acmicpc.net/problem/1676

#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	while (n / 5 > 0)
	{
		count += n / 5;
		n /= 5;
	}
	cout << count;
}

/*

50 = 12
�� �ȿ��� 5�� 25�� �������. �׷��� 2 �߰���.

���丮�� N!
1 * 2 * 3 = 6
0

1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 3628800
=

5�� ������ 0�� ������ �߰���? 5���� 0�� ������ ����?

5�� ������ �������� 0�� ���� ������?
5, 25, 125, ��....

*/