// https://www.acmicpc.net/problem/8723

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 3);

	if (arr[0] == arr[1] == arr[2])
		cout << 2;
	else if ((arr[0] * arr[0] + arr[1] * arr[1]) == (arr[2] * arr[2]))
		cout << 1;
	else cout << 0;
}

// 0 : ����, ���ﰢ�� �� ������� ���
// 1 : �����ﰢ���� ���� �� �ִ� ���
// 2 : ���ﰢ���� ���� �� �ִ� ���