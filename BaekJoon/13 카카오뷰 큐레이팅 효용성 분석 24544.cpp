// https://www.acmicpc.net/problem/24544

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, total = 0, temp, no = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 0) no += arr[i];
	}
	cout << total << '\n' << no;
}