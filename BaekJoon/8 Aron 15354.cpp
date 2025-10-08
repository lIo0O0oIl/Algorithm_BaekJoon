// https://www.acmicpc.net/problem/15354

#include <iostream>
using namespace std;

int main()
{
	int n, aron = 1;
	char input, current = ' ';
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input != current) aron++;
		current = input;
	}
	cout << aron;
}