// https://www.acmicpc.net/problem/23968

#include <iostream>
using namespace std;

int arr[10001];

int main()
{
	int n, k, now = 0;
	bool is_ok = false;
	int own, two;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				now++;
				if (now == k)
				{
					is_ok = true;
					own = arr[j];
					two = arr[j + 1];
				}
			}
		}
	}
	if (is_ok) cout << own << " " << two;
	else cout << -1;
}