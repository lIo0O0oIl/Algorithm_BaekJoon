// https://www.acmicpc.net/problem/9848

#include <iostream>
using namespace std;

int main()
{
	int n, k, input, current, gift = 0;
	cin >> n >> k >> current;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input + k <= current)
		{
			gift++;
		}
		current = input;
	}
	cout << gift;
}