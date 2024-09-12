// https://www.acmicpc.net/problem/26529

#include <iostream>
using namespace std;

long long arr[46] = { 1, 1, 2, 3, 5, 8, 13 };

int Fibonacci(int i)
{
	if (arr[i] == 0)
	{
		arr[i] = Fibonacci(i - 1) + Fibonacci(i - 2);
	}
	return arr[i];
}

int main()
{
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		cout << Fibonacci(input) << '\n';
	}
}