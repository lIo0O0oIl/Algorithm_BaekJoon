// https://www.acmicpc.net/problem/11726

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[1001] = { 1, 1, 2, 3 };
	for (int i = 4; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	cout << arr[n];
}

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr), cout.tie(nullptr);