// https://www.acmicpc.net/problem/17174

#include <iostream>
using namespace std;

int main()
{
	int n, m, count = 0, bundle = 0;
	cin >> n >> m;
	count = n;
	while (n / m)
	{
		count += n / m;
		n /= m;
	}
	cout << count;
}