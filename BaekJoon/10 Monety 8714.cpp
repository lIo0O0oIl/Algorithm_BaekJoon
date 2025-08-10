// https://www.acmicpc.net/problem/8714

#include <iostream>
using namespace std;

int main()
{
	int t, input, front = 0, back = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		if (input == 0) back++;
		else front++;
	}
	cout << (back >= front ? front : back);
}