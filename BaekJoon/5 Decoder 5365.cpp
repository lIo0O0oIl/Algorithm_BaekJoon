// https://www.acmicpc.net/problem/5365

#include <iostream>
using namespace std;

int main()
{
	int n, size;
	string input;

	cin >> n >> input;
	cout << input[0];
	size = input.size();

	for (int i = 1; i < n; i++)
	{
		cin >> input;

		if (input.size() >= size)
		{
			cout << input[size - 1];
		}
		else cout << ' ';

		size = input.size();
	}
}