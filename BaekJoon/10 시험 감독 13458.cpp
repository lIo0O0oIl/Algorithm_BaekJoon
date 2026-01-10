// https://www.acmicpc.net/problem/13458

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, a, b, c;
	long long count = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> b >> c;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] - b <= 0)
		{
			count++;
		}
		else
		{
			arr[i] -= b;
			count++;
			if (arr[i] % c != 0) count += arr[i] / c + 1;
			else count += arr[i] / c;
		}
	}
	cout << count;
}