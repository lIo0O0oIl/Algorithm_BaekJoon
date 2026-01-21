// https://www.acmicpc.net/problem/6212

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m;
	int arr[10] = { 0 };
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		string num = to_string(i);
		for (int j = 0; j < num.size(); j++)
		{
			arr[num[j] - '0']++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
}