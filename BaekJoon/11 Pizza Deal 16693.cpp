// https://www.acmicpc.net/problem/16693

#include <iostream>
using namespace std;

int main()
{
	double a1, p1, r1, p2;
	cin >> a1 >> p1 >> r1 >> p2;
	p1 = a1 / p1;
	p2 = (3.1415926535 * r1 * r1) / p2;
	if (p1 > p2)
	{
		cout << "Slice of pizza";
	}
	else cout << "Whole pizza";
}