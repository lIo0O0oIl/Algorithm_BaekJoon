// https://www.acmicpc.net/problem/30009

#include <iostream>
using namespace std;

int main()
{
	int n, x, y, r, input, a, b;
	a = b = 0;
	cin >> n >> x >> y >> r;
	int left = x - r, right = x + r;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == left || input == right) b++;
		else if (input > left && input < right) a++;
	}
	cout << a << ' ' << b;
}