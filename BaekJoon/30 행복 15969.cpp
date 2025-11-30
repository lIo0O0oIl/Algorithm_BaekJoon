// https://www.acmicpc.net/problem/15969

#include <iostream>
using namespace std;

int main()
{
	int n, input, small, big;
	cin >> n >> input;
	small = input;
	big = input;
	for (int i = 1; i < n; i++)
	{
		cin >> input;
		if (input < small) small = input;
		if (input > big) big = input;
	}
	cout << big - small;
}