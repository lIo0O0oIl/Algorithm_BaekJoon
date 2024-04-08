// https://www.acmicpc.net/problem/2747

#include <iostream>
using namespace std;

int arr[46] = {0, 1, 1, 2, 3, 5};

int fibonacci(int n)
{
	if (arr[n] == 0)
	{
		arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	return arr[n];
}

int main() {
	int input;
	cin >> input;
	cout << fibonacci(input);
}