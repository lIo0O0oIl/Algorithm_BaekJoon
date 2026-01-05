// https://www.acmicpc.net/problem/27329

#include <iostream>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n / 2; i++)
	{
		if (s[i] != s[(n / 2) + i])
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}