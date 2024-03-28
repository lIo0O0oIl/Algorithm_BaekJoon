// https://www.acmicpc.net/problem/4153

#include <iostream>
using namespace std;

int main() {
	int a, b, c, big = 0;
	bool triangle = false;
	while (true)
	{
		cin >> a >> b >> c;
		if (a + b + c == 0) return 0;
		if (a > big)
		{
			big = a;
			if (big * big == b * b + c * c) triangle = true;
		}
		if (b > big)
		{
			big = b;
			if (big * big == a * a + c * c) triangle = true;
		}
		if (c > big)
		{
			big = c;
			if (big * big == a * a + b * b) triangle = true;
		}
		if (triangle)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
		triangle = false;
		big = 0;
	}
}