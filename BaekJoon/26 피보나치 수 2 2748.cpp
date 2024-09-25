// https://www.acmicpc.net/problem/2748

#include <iostream>
using namespace std;

long long arr[91] = { 0, 1, 1, 2, 3, 5, 8 };

long long Fibonacci(int n)
{
	if (arr[n] == 0)
	{
		arr[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	return arr[n];
}

int main()
{
	int n;
	cin >> n;
	cout << Fibonacci(n);
}