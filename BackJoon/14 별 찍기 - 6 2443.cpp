// https://www.acmicpc.net/problem/2443

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
		for (int j = 0; j < (2 * n) - (i * 2) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}