// https://www.acmicpc.net/problem/15829

#include <iostream>
using namespace std;

int main()
{
	int n;
	string a;
	long long result = 0;
	cin >> n >> a;
	for (int i = 0; i < a.size(); i++)
	{
		int num = a[i] - 96;
		long long r = 1;
		for (int j = 0; j < i; j++)
		{
			r = (r * 31) % 1234567891;
		}

		result += (num * r) % 1234567891;
	}
	cout << result % 1234567891;
}