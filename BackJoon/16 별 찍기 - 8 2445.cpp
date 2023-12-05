// https://www.acmicpc.net/problem/2445

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		for (int j = 1; j < 2 * n - i * 2 - 1; j++)
		{
			cout << " ";
		}
		for (int o = 0; o < i + 1; o++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int k = 0; k < n - 1 - i; k++)
		{
			cout << "*";
		}
		for (int k = 0; k < (i * 2) + 2; k++)
		{
			cout << " ";
		}
		for (int o = 0; o < n - 1 - i; o++)
		{
			cout << "*";
		}
		cout << endl;
	}
}