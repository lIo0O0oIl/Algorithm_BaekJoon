// https://www.acmicpc.net/problem/10810

#include <iostream>
using namespace std;

int arr[101];

int main() {
	int n, m, from, to, k;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> from >> to >> k;
		for (int j = from; j <= to; j++)
		{
			arr[j] = k;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
}