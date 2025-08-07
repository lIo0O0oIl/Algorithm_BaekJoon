// https://www.acmicpc.net/problem/27541

#include <iostream>
using namespace std;

int main()
{
	int n;
	char input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (i == n - 1)
		{
			if (input == 'G') return 0;
			else cout << input << 'G';
		}
		cout << input;
	}
}