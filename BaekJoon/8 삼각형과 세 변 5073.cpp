// https://www.acmicpc.net/problem/5073

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		if (a + b + c - max({ a, b, c }) > max({ a, b, c }))
		{
			if (a == b && b == c && c == a) cout << "Equilateral";
			else if (a == b || b == c || c == a) cout << "Isosceles";
			else cout << "Scalene";
		}
		else cout << "Invalid";
		cout << '\n';
	}
}