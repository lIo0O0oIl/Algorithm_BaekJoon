// https://www.acmicpc.net/problem/13241

#include <iostream>
using namespace std;

int main()
{
	int n;
	long long a, b, oa, ob;
	cin >> a >> b;
	oa = a;
	ob = b;
	while (true)
	{
		if (a == b)
		{
			cout << a;
			break;
		}
		else if (a > b)
		{
			b += ob;
		}
		else a += oa;
	}
}