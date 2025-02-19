// https://www.acmicpc.net/problem/1934

#include <iostream>
using namespace std;

int main()
{
	int n;
	long long a, b, oa, ob;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		oa = a;
		ob = b;
		while (true)
		{
			if (a == b)
			{
				cout << a << '\n';
				break;
			}
			else if (a > b)
			{
				b += ob;
			}
			else a += oa;
		}
	}
}