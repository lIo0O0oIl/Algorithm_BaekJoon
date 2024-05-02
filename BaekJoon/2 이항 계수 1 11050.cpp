// https://www.acmicpc.net/problem/11050

#include <iostream>
using namespace std;

int arr[15] = { 0, 1, 2, 6 };

int Factorial(int n)
{
	if (arr[n] == 0)
	{
		arr[n] = 1;
		for (int i = 2; i <= n; i++)
		{
			arr[n] *= i;
		}
	}
	return arr[n];
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << Factorial(n) / (Factorial(n - k) * Factorial(k));
}

/*
5 2

5 * 4 * 3 * 2 * 1 = 120
3 * 2 * 1 = 6
2 * 1 = 2


120 / 6 * 2 = 10

*/