// https://www.acmicpc.net/problem/17263

#include <iostream>
using namespace std;

int main()
{
	int n;
	long long input, big = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input > big) big = input;
	}
	cout << big;
}