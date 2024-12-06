// https://www.acmicpc.net/problem/11727

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n;
	cin >> n;

	int arr[1001] = { 1, 1, 3, 5 };
	for (int i = 4; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 2]) % 10007;
	}
	cout << arr[n];
}