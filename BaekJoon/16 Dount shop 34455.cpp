// https://www.acmicpc.net/problem/34455

#include <iostream>
using namespace std;

int main()
{
	int d, e, q;
	char s;
	cin >> d >> e;
	for (int i = 0; i < e; ++i)
	{
		cin >> s >> q;
		if (s == '+') d += q;
		else if (s == '-') d -= q;
	}
	cout << d;
}