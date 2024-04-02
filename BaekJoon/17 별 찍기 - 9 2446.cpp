// https://www.acmicpc.net/problem/2446

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		for (int j = 1; j < 2 * n - i * 2; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int k = 0; k < n - i - 2; k++)
		{
			cout << " ";
		}
		for (int k = 0; k < (i * 2) + 3; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}